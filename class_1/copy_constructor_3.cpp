//拷贝构造函数 
#include<iostream>
#include<string>
using namespace std;

class Person
{
private:

public:
    int ege_;
    Person(){
        cout<<"Person 构造函数调用"<<endl;
    }
    Person(int ege){
        ege_=ege;cout<<"Person 构造函数调用(int ege)"<<endl;
    }
    Person(const Person& p){//const ,引用传递
        cout<<"Person 拷贝构造函数"<<endl;
        ege_=p.ege_;
    }
    ~Person(){
        cout<<"Person 析构函数调用"<<endl;
    };
};
//
void test1(){
    Person p1(10);
    Person p2=p1;
}
//值传递给函数参数传值
//实参传递形参，拷贝一个，临时副本改变不改变原值
void dowork(Person p){

}
void test2(){
    Person p1(10);
    dowork(p1);
}
//值方式返回局部对象
//!注意
//新版编译器执行了返回值优化（ RVO）或着说命名返回值优化（NRVO）。这些优化技术允许编译器消除不必要的拷贝或移动操作，
//编译器不会创建临时对象，而是在调用者的上下文中直接构造这个对象
Person dowork2(){
    Person p1(100);
    return p1;
}
void test3(){
    Person p=dowork2();
    Person p2=p;
}
int main(){
    system("chcp 65001");
    //test1();
    //test2();
    test3();
    system("pause");
}