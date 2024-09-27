//g++ -o multi.exe usePerson.cpp
#include<iostream>
#include<string>
#include"person.hpp"

//或者直接引用实现的文件 例如 Person.cpp  不建议
using namespace std;

void test1(){
    Person<string,int> p1("Jack",22);
    p1.showPerson();
}
int main(){
    system("chcp 65001");
    test1();
    system("pause");
}