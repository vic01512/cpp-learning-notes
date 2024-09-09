//引用
#include<iostream>
using namespace std;

void swap1(int & a,int&b);
double cube(double& a);
double refcube1(const double & a);
//不要返回局部变量引用
int& test01(){
    static int a=10;//int a=10;
    return a;
}
int main(){
    int a=10;
    int &b=a;//引用
    //引用必须初始化，并接近于const 指针 int* const pr=&a,一旦初始化不可更改
    int c=20;
    b=c;//赋值操作

    //引用做函数参数,按引用传参
// cube(b+1) !禁止 
//当参数是const引用时，允许创建临时变量存储，因为目的是使用传递的值，类似于按值传递，不修改原始数据
    const int& d=10;//int temp=10;const int& d=temp;常量引用
    long edge=2L;

    double c1=refcube1(edge);
    double c2=refcube1(7.0);
    double c3=refcube1(c+7.0);//都被允许，使用临时变量存储
    //应尽可能将引用参数声明为常数数据


}

void swap1(int & a,int&b){
    int temp=a;a=b;b=temp;
}
double cube(double& a){
    return a*=a*a;
}
double refcube1(const double & a){
    return a*a*a;
}