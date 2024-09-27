//友元函数
//类内直接声明
//类外 全局
#include<iostream>
#include<string>
using namespace std;
//c++20可直接通过
//提前声明
template<class NameType,class EgeType>
class Person;

template<class NameType,class EgeType>
void printPerson2(Person<NameType,EgeType>& t){
        cout<<"类外实现--name= "<<t.name_<<endl<<"ege= "<<t.ege_<<endl;
    }


template<class NameType,class EgeType>
class Person{
    //全局函数 类内实现
    friend void printPerson(Person<NameType,EgeType>& t){
        cout<<"name= "<<t.name_<<endl<<"ege= "<<t.ege_<<endl;
    }
    //全局函数 类外实现
    friend void printPerson2<>(Person<NameType,EgeType>& t);//这是一个普通函数 加<> 参数列表
    public:
    Person(NameType name,EgeType age);
    void showPerson(){
        cout<<"name= "<<name_<<endl<<"ege= "<<ege_<<endl;
    }
    private:
        NameType name_;
        EgeType ege_;
};
template<class NameType,class EgeType>
Person<NameType,EgeType>:: Person(NameType name,EgeType age):name_(name),ege_(age){}//在域名后注释



void test1(){
    Person<string,int> p1("rose",23);
    printPerson(p1);
    printPerson2(p1);
}

int main(){
    system("chcp 65001");
    test1();
    system("pause");
}