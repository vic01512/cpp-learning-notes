//菱形继承
#include<iostream>
using namespace std;

class Animal{
public:
    int ege_;
};

class Sheep:virtual public Animal{};//利用虚继承解决
//Animal类称为 虚基类
//继承 vbptr 虚基类指针 指向 vbtable 虚基类表 表格中记录到数据的偏移量

class Tuo:virtual public Animal{};

class SheepTuo:public Sheep,public Tuo{};//继承了两份ege

void test1(){
    SheepTuo p1;
    p1.Sheep::ege_=18;
    p1.Tuo::ege_=28;
    cout<<"p1.Sheep::ege_="<<p1.Sheep::ege_<<endl;
    cout<<"p1.Tuo::ege_="<<p1.Tuo::ege_<<endl;
    cout<<"p1.ege_="<<p1.ege_<<endl;//虚继承后使用同一份数据，解决二义性
    cout<<"size of SheepTuo "<<sizeof(SheepTuo)<<endl;

}
int main(){
    system("chcp 65001");
    test1();
    system("pause");
}