#pragma once
#include<iostream>
using namespace std;
//类模板成员函数在调用阶段创建，导致分文件编写时链接不到
//声明和实现写到同一个文件中，后缀为 .hpp

template<class NameType,class EgeType>
class Person{
    public:
    NameType name_;
    EgeType ege_;
    Person(NameType name,EgeType age);
    void showPerson();
};
template<class NameType,class EgeType>
Person<NameType,EgeType>:: Person(NameType name,EgeType age):name_(name),ege_(age){}//在域名后注释
template<class NameType,class EgeType>
void Person<NameType,EgeType>::showPerson(){
    cout<<"name= "<<name_<<endl<<"ege= "<<ege_<<endl;
}