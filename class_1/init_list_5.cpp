//初始化列表
#include<iostream>
#include<string>
using namespace std;

class Person
{
public:
    int a_;
    int b_;
    int c_;
    //Person():a_(10),b_(23),c_(33){
    //    cout<<"Person 构造函数调用"<<endl;
    //}
    Person(int a,int b,int c):a_(a),b_(b),c_(c){
        cout<<"Person 构造函数调用"<<endl;
    }
    ~Person(){
        cout<<"Person 析构函数调用"<<endl;
    };
};
void test1(){
    //Person p1;
    Person p1(10,29,99);
    cout<<p1.a_<<endl<<p1.b_<<endl<<p1.c_<<endl;
}
int main(){
    system("chcp 65001");
    test1();
    system("pause");
}