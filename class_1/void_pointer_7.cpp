//允许空指针访问成员函数，
#include<iostream>
using namespace std;

class Person
{
public:
    int age_;
    Person(int age):age_(age){}
    void show(){
        cout<<"hello"<<endl;
    }
    void showAge(){
        if(this==NULL)
            return;
        cout<<age_<<endl;//此处为this->age_
    }
};
void test1(){
    Person *p=NULL;
    p->show();
    p->showAge();
    //会报错
}
int main(){
    system("chcp 65001");
    test1();
    system("pause");
}