//虚析构 纯虚析构
#include<iostream>
#include<string>
using namespace std;
//多态使用时，如果子类有属性开辟到堆区，父类指针释放时无法调用子类析构代码
//将父类的析构函数改为虚析构或纯虚析构
//纯虚析构 该类属于抽象类

class Base{
public:
    virtual void func(){
        cout<<"base"<<endl;
    }
    Base(){
        cout<<"Base构造函数调用"<<endl;
    }
    // ~Base(){
    //     cout<<"Base析构函数调用"<<endl;
    // }

    // //虚析构
    // virtual ~Base(){
    //     cout<<"Base虚析构函数调用"<<endl;
    // }
    //纯虚析构
    virtual ~Base()=0;//析构函数必须需要具体实现，父类可能也有堆区数据
};
Base::~Base(){
    cout<<"Base纯虚析构函数调用"<<endl;
}
class Anew:public Base{
    public:
    string* name_;
    Anew(string name){
        cout<<"new构造函数调用"<<endl;
        name_=new string(name);
    }
    virtual void func(){
        cout<<*name_<<" anew"<<endl;
    }
    ~Anew(){
        if(name_!=NULL)
            {
                cout<<"ANEW析构函数"<<endl;
                delete name_;
            name_=NULL;}

    }
};
void test1(){
    Base* b1=new Anew("Jack");//指针只接受子类中父类的部分，释放也只释放了那部分
    b1->func();
    delete b1;

}
int main(){
    system("chcp 65001");
    test1();
    system("pause");
}