//纯虚函数
#include<iostream>
using namespace std;
//多态 父类的虚函数往往毫无意义
//改为纯虚函数  =0
//该父类 称为 抽象类
//无法实例化对象
//子类必须重写纯虚函数，否则也是抽象类

class Base{//抽象类
public:
    virtual void func()=0;//纯虚函数
};

class Anew{
    public:
    void func(){
        cout<<"hello"<<endl;
    }
}