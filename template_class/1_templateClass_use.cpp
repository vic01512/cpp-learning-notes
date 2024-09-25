//类模板
//类中成员数据类型可以不具体制定
#include<iostream>
#include<string>
using namespace std;

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


void test1(){
    Person<string,int> p1("Jack",22);//<string,int> 模板的参数列表
    p1.showPerson();
    Person p2("Rose",30.5);
    p2.showPerson();
}
int main(){
    system("chcp 65001");
    test1();
    system("pause");
}