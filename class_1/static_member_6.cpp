//静态成员static
#include<iostream>
#include<string>
using namespace std;
//静态成员变量
//所有对象用同一份数据
//类内声明，类外初始化 必须要
//编译阶段分配内存

//静态成员函数，调用方式同静态成员变量
//所有对象共享一个函数
//静态成员函数只能访问静态成员变量

//只有非静态变量才存属于类的对象上
class Person
{

public:
    static int num_;
    static void hi(){
        cout<<"你好！"<<endl;
    }
private:
    static int a_;//静态成员的访问权限
};
int Person::num_=1;//初始化，Person作用域下
void test1(){
    Person p1;
    cout<<p1.num_<<endl;
    Person p2;
    p2.num_=200;
    cout<<p2.num_<<endl;cout<<p1.num_<<endl;
}
void test2(){
    //静态成员的两种访问方式：1通过对象访问；2通过类名访问
    cout<<Person::num_<<endl;
    Person::hi();
}
int main(){
    system("chcp 65001");
    test2();
    system("pause");
}