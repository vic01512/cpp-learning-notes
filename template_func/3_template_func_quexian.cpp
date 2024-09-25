//函数模板的局限性
//交换的模板函数，若传入参数为数组或class，无法交换
//通过模板的重载，为某些类型提供具体化的模板
#include<iostream>
#include<string>
using namespace std;

class Person{
    public:
    string name_;
    int age_;
    Person(string name,int age):name_(name),age_(age){}
    //第一种重载运算符
};

template<class T>
bool is_equ(T &a,T &b){
    if (a==b)
    {
        return true;
    }
    else 
        return false;
}
//第二种方法
//Person版本实现代码
template<> bool is_equ(Person &a,Person &b){
    if (a.age_==b.age_&&a.name_==b.name_)
    {
        return true;
    }
    else 
        return false;
}

void test1(){
    int a=10,b=0;
    cout<<is_equ(a,b)<<endl;
    Person p1("jack",22);
    Person p2("Rose",30);
    cout<<is_equ(p1,p2)<<endl;
}
int main(){
    system("chcp 65001");
    test1();
    system("pause");
}