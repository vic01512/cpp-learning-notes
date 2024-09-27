//类模板
//类中成员数据类型可以不具体制定
//类模板中成员函数创建时机
#include<iostream>
#include<string>
using namespace std;

template<class NameType,class EgeType>//类模板中可以有默认类型
class Person{
    public:
    NameType name_;
    EgeType ege_;
    Person(NameType name,EgeType age):name_(name),ege_(age){}
    void showPerson(){
        cout<<"name= "<<name_<<endl<<"ege= "<<ege_<<endl;
    }
};


class Base{
    public:
    void showPerson(){
        cout<<"base!\n";
    }
};
template<class T>
class Person1{
    public:
    T obj;
    void func1(){
        obj.showPerson();
    }
};//能够编译通过，不调用就不会创建成员函数


void test1(){
    Person<string,int> p1("Jack",22);//<string,int> 模板的参数列表
    p1.showPerson();
    Person p2("Rose",30.5);//c++17类模板可以自动推导
    p2.showPerson();
}

//类模板中成员函数创建时机
//调用时才会创建
void test2(){
    Person1<Base>m;
    m.func1();
}
int main(){
    system("chcp 65001");
    test1();
    test2();
    system("pause");
}