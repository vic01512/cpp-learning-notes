//加法运算符重载
//左移运算符重载<<
#include<iostream>
using namespace std;
//自定义数据类型
//不使用成员函数重载<<，无法实现cout在左侧，只能p<<cout；p.operator<<(cout)

class Person{
    friend ostream& operator<<(ostream& cout,Person& p);//可访问私有
public:
    int a_;
    int b_;
    //成员函数重载
    Person operator+(Person & p){
        Person temp(0,0);
        temp.a_=this->a_+p.a_;
        temp.b_=this->b_+p.b_;
        return temp;
    }
    Person(int a,int b):a_(a),b_(b){}
};
//全局函数重载
Person operator-(Person &p1,Person &p2){
        Person temp(0,0);
        temp.a_=p1.a_-p2.a_;
        temp.b_=p1.b_-p2.b_;
        return temp;    
}
Person operator+(Person &p1,int a){
        Person temp(0,0);
        temp.a_=p1.a_+a;
        temp.b_=p1.b_+a;
        return temp;    
}
ostream& operator<<(ostream& cout,Person& p){ //返回ostream的引用
    cout<<p.a_<<" and "<<p.b_;
    return cout;
}
void test1(){
    Person p1(10,20);
    Person p2(20,30);
    Person p3=p1+p2;
    Person p4=p1-p2;
    Person p5=p1+20;
    cout<<p3.a_<<endl;
    cout<<p4.a_<<endl;
    cout<<p5.a_<<endl;
    cout<<p1<<"and "<<p2<<endl;
}
int main(){
    system("chcp 65001");
    test1();
    system("pause");
}