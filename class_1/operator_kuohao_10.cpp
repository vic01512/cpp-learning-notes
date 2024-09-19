//函数调用括号运算符重载   仿函数
#include<iostream>
#include<string>
using namespace std;

class MyPrint
{

public:
    //string text_;
    void operator() (string text){
        cout<<text<<endl;
    }
};
class MyAdd{
    public:
    int operator()(int a,int b){
        return a+b;
    }
};

void test1(){
    MyPrint m1;
    m1("hello world!");
    cout<<MyAdd()(20,90)<<endl;//匿名函数对象
}
//仿函数灵活 
int main(){
    system("chcp 65001");
    test1();
    system("pause");
}