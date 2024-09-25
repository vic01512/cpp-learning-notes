//模板函数和普通函数调用规则
//两者可以重载
//若两者都可以实现，优先调用普通函数
//可以通过空模板参数列表强制调用模板函数
//若函数模板可以更好匹配，优先调用函数模板
#include<iostream>
using namespace std;

template<class T>
void Myprint(T a,T b){
    cout<<"调用模板函数a,b"<<endl;
}
template<class T>
void Myprint(T a){
    cout<<"调用模板函数a"<<endl;
}
void Myprint(int a,int b){
    cout<<"调用普通函数a,b"<<endl;
}
void test1(){
    int a=10,b=9;
    Myprint(a,b);
    //通过空模板参数列表强制调用模板函数
    Myprint<>(a,b);
    Myprint(a);
    
    char c1='a',c2='b';
    Myprint(a,b);
}
int main(){
    system("chcp 65001");
    test1();
    system("pause");
}