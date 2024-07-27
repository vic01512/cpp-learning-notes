#include<iostream>
using namespace std;

int main(){
    int a=10,b=10;
    int *p=&a;//初始化
    *p=20;
    cout<<*p<<endl;

    int *ps= new int;//从堆或自由储存区分配内存
    *ps=1001;
    delete ps;//释放内存

    int *p=NULL;//空指针

    //const修饰指针
    //常量指针,指针指向可修改，不可修改指向的值
    const int* pc=&a;pc=&b;
    //指针常量,指针指向不可修改，可修改指针指向的值
    int *const p1=&b;*p1=20;

    const int *const p2=&a;//都不能修改

    //大型数据应使用new，
    int *psome=new int[10];
    delete [] psome; //[]释放整个数组

    return 0;
}