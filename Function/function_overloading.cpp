//函数重载
#include<iostream>
using namespace std;
//关键为参数列表-特征标，参数的数目和类型以及排列顺序
//注意：返回类型不是特征标
void prin(const int* p,int b);
void prin(double a,long b);
void prin(int a,long b);

//编译器在检查函数特征标时，将把类型引用和类型本身视为同一个特征标

//重载引用参数
void sink(double& r1);//与可修改的左值参数匹配，double类型变量
void sink(const double& r2);//与可修改的左值参数、const左值参数、右值参数（如两个double值的和）匹配
void sink(double&& r3);//与右值匹配

//重载碰到默认参数,下面两个语法正确，调用时func1(10)会出错
void func1(int a ,int b=10){
    cout<<"func1(int a ,int b=10)\n"
}
void func1(int a ){
    cout<<"func1(int a )\n"
}