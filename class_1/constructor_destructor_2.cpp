//构造函数和析构函数，由编译器自动调用，初始化和清理
#include<iostream>
using namespace std;

//构造函数不声明类型
//类名(){}可以重载

//析构函数~类名(){}不可以有参数，不能重载

class Person
{
private:
    /* data */
public:
    Person(){
        cout<<"Person 构造函数调用"<<endl;
    }
    ~Person(){
        cout<<"Person 析构函数调用"<<endl;
    };
};

void test1(){
    Person p1;
}
int main(){
    system("chcp 65001");
    test1();
    system("pause");
}