//继承同名成员处理方式
//同名静态成员处理
#include<iostream>
using namespace std;
//子类父类有同名成员，通过子类访问
//访问子类，直接访问
//访问父类，加作用域
class Person{
public:
    int age_;
    static int abc;
};
int Person::abc=100;//类外初始化
class Son:public Person
{
    public:
    int age_;
    static int abc;
};
int Son::abc=200;
void test1()
{
    Son s1;
    s1.age_=10;
    s1.Person::age_=20;//同名成员函数同理
    cout<<s1.abc<<endl<<s1.Person::abc<<endl;//通过对象访问
    //通过类名访问
    cout<<Son::abc<<endl<<Son::Person::abc<<endl;//Son::表示通过类名访问，Person::表示作用域
}
//注意如果子类出现父类同名成员函数，会隐藏掉所有父类同名函数，不可通过重载标识符识别。需要加作用域

int main(){
    system("chcp 65001");
    test1();
    system("pause");
}