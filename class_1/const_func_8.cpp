//const 修饰成员函数
//成员函数后加const--常函数
//常函数内不能修改成员属性
//成员属性声明时加mutable，常函数可修改
//常对象 const修饰对象
//常对象只能调用常函数
#include<iostream>
using namespace std;

class Person{
public:
    int a_;
    mutable int b_;//常函数中可修改
    //this指针是指针常量，指针指向不可修改
    //Person *const this
    //函数后加const 等同于const Person *const this，不可修改指向值
    void showPerson()//void showPerson() const
    //这个const本质修饰的是this指针
    {
        this->a_=100;
        //this=NULL;不可修改
    }
    void showPerson1() const{
        this->b_=100;
    }
    Person(int a,int b):a_(a),b_(b){}
};
void test1(){
    Person p(10,29);
    p.showPerson();
}
void test2(){
    const Person p1(10,28);//常对象
    //此处曾经报错，在 C++ 中，当你声明一个 const 变量时，你必须在声明时初始化它。
    p1.b_=100;
    //p.a_=12;不可修改
    
}
int main(){
    system("chcp 65001");
    test1();
    test2();
    system("pause");
}