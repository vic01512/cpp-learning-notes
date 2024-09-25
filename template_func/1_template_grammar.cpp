//模板  泛型编程
//函数模板
//建立一个通用函数，返回值类型和形参类型可以不具体制定，用一个虚拟的类型代替
#include<iostream>
using namespace std;

template<typename T>
void myswap(T& a,T&b){
    T temp=a;
    a=b;b=temp;
}
template<typename D>
void speak(){
    cout<<"hellp\n";
}
void test1(){
    int a=10,b=20;
    //自动推导,必须推导出一致的数据类型才可以使用，必须要能推断出T的数据类型
    myswap(a,b);
    //显式
    //myswap<int>(a,b);
    speak<int>();//必须显示，否则编译器无法推断
    cout<<a<<endl;
    

}
int main(){
    system("chcp 65001");
    test1();
    system("pause");
}
