//类模板  继承
#include<iostream>
#include<string>
using namespace std;
//父类是一个类模板时
//子类声明时需要指定父类的类型
//不指定无法分配内存
//若需要灵活指定，则子类也需要编程类模板
template<class T>
class Base{
    public:
    T a_;

};

class Son:public Base<int>{
};

template<class T1,class T2>
class Gir:public Base<T1>{
    T2 bj_;
};

void test1(){
    Son s1;
    Gir<int,char> s2;
}


int main(){
    system("chcp 65001");
    test1();
    system("pause");
}