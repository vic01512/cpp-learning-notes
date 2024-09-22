//多态的基本用法
#include<iostream>
using namespace std;
//静态多态：函数重载 运算符重载
//动态多态：派生类和虚函数实现运行时多态
//动态多态函数地址 运行阶段确定
//按值传递 只会将子类的父类部分传递给函数
//指针和引用的 向上隐式转换 ，使基类指针或引用可以指向基类对象或派生类对象，因此需要动态联编

class Animal{
public:
    void Speak(){
        cout<<"动物说话"<<endl;
    }
    //虚函数
    //如果要在派生类中重新定义基类的方法，则将它设置为虚方法；否则，设置为非虚方法。
    virtual void Who(){
        cout<<"animal"<<endl;
    }
};

class Cat:public Animal{
    public:
    void Speak(){
        cout<<"小猫说话"<<endl;
    }
    //c++规定，当一个成员函数被声明为虚函数后，其派生类中的同名函数都自动成为虚函数。
    void Who(){
        cout<<"Cat"<<endl;
    }
};

//地址早绑定
void doSpeak(Animal & ani){//指向基类的引用或指针可以引用派生类对象，而不必进行显式类型转换
    ani.Speak();
}

void doWho(Animal & ani){
    ani.Who();
}

void test1(){
    Cat cat;
    doSpeak(cat);
    doWho(cat);
    Animal *a1=& cat;//向上隐式转换
    a1->Speak();//非虚函数，调用 Animal::who
    a1->Who();//虚函数，根据对象类型调用
}
void test2(){
    cout<<"sizeof animal "<<sizeof(Animal)<<endl;
    //虚函数对应一个指针vfptr，指向函数地址数组，称为虚函数表vftable
    //虚函数表中存储了为类对象进行声明的虚函数的地址。
    //子类重写父类基函数时，子类虚函数表替换成子类的新函数地址；定义了新的虚函数，添加到表中
    cout<<"sizeof cat "<<sizeof(Cat)<<endl;
}
int main(){
    system("chcp 65001");
    test2();
    system("pause");
}