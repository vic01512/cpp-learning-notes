//类模板做函数参数
#include<iostream>
#include<string>
using namespace std;
//类模板实例化的对象作为参数
//指定传入类型
//参数模板化
//整个类模板化

template<class NameType,class EgeType>
class Person{
    public:
    NameType name_;
    EgeType ege_;
    Person(NameType name,EgeType age):name_(name),ege_(age){}
    void showPerson(){
        cout<<"name= "<<name_<<endl<<"ege= "<<ege_<<endl;
    }
};

//1.指定传入类型,引用方式
void printPerson1(Person<string,int>& p){
    p.showPerson();
}
void test1(){
    Person<string,int> p1("Jack",22);//<string,int> 模板的参数列表
    printPerson1(p1);

}

//2.函数参数模板化
template<class NameType,class EgeType>
void printPerson2(Person<NameType,EgeType>& p){
    p.showPerson();
}
void test2(){
    Person<string,int> p1("rose",23);//<string,int> 模板的参数列表
    printPerson2(p1);
}
//3.整个类模板化
template<class T>
void printPerson3(T& p){
    p.showPerson();
}
void test3(){
    Person<string,int> p1("james",33);//<string,int> 模板的参数列表
    printPerson3(p1);
}


int main(){
    system("chcp 65001");
    test1();
    test2();
    test3();
    system("pause");
}
