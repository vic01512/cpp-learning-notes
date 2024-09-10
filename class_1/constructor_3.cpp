//构造函数 详细
#include<iostream>
#include<string>
using namespace std;

class Person
{
private:
    int ege_;//一般加入m_前缀或_后缀与构造函数中参数列表区分
    string name_;
public:
    Person(){
        cout<<"Person 构造函数调用"<<endl;
    }
    Person(int ege,string name){
        cout<<"Person 构造函数调用(int ege,string name)"<<endl;
        ege_=ege;name_=name;
    }
    Person(const Person& p){//const ,引用传递
        cout<<"Person 拷贝构造函数"<<endl;
    }
    Person(int ege){
        cout<<"Person 隐式转换调用构造函数调用"<<endl;
    }
    ~Person(){
        cout<<"Person 析构函数调用"<<endl;
    };
};

void test1(){
    Person p1;
    Person p2=Person(18,"詹姆斯");//显式调用
    Person p3(20,"Tue");//隐式调用
    Person* p4=new Person(24,"正式");
    Person p5=10;//隐式转换调用
    Person p6=p2;//拷贝构造
}
int main(){
    system("chcp 65001");
    test1();
    system("pause");
}