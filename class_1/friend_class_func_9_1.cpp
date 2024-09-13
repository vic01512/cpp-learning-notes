//类中的成员函数做友元
#include<iostream>
using namespace std;


class Person;
class GoodFriend{
public:
    int money_;
    GoodFriend();
    Person *p;//注意申明位置
    void GFHeight();
    void GFHeight1();//希望这个能访问私有，另一个不能访问
};
class Person{
    friend void GoodFriend::GFHeight1();//注意此处曾经报错，函数申明要在此处前
    //friend class GoodFriend;
private:
    int height_;
public:
    int age_;
    Person():age_(1),height_(188){
    }
};


void test1(){
    GoodFriend gf;
    gf.GFHeight1();
    gf.GFHeight();
}
int main(){
    system("chcp 65001");
    test1();
    system("pause");
}
GoodFriend::GoodFriend():money_(1000){
    p=new Person;
    cout<<"类外实现"<<endl;
}
void GoodFriend::GFHeight1(){
    cout<<"访问身高："<<p->height_<<endl;
    cout<<"访问年龄："<<p->age_<<endl;
}
void GoodFriend::GFHeight(){
    cout<<"访问年龄："<<p->age_<<endl;
}