//友元
//让一个函数或类 访问另一个类中的私有成员
#include<iostream>
#include<string>
using namespace std;

//全局函数做友元
//类做友元
//类中的成员函数做友元
class Person{
    friend void showHeight(Person *p);//友元
    friend class GoodFriend;//友元
private:
    int height_;
public:
    int age_;
    Person():age_(1),height_(188){
    }
};
//类做友元
class GoodFriend{
public:
    int money_;
    GoodFriend();
    Person *p;
    void GFHeight(Person *p);
};
//全局函数做友元
void showHeight(Person *p){
    cout<<p->height_<<endl;
}
void test1(){
    Person p1;
    GoodFriend gf;
    gf.GFHeight(gf.p);
    showHeight(&p1);
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
void GoodFriend::GFHeight(Person *p){
    cout<<"访问身高："<<p->height_<<endl;
}