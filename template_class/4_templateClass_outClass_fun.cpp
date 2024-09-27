//类模板 成语函数类外实现
#include<iostream>
#include<string>
using namespace std;
template<class NameType,class EgeType>
class Person{
    public:
    NameType name_;
    EgeType ege_;
    Person(NameType name,EgeType age);
    void showPerson(){
        cout<<"name= "<<name_<<endl<<"ege= "<<ege_<<endl;
    }
};
template<class NameType,class EgeType>
Person<NameType,EgeType>:: Person(NameType name,EgeType age):name_(name),ege_(age){}//在域名后注释