//继承中的对象模型
//子类继承 构造函数 析构函数 顺序
#include<iostream>
using namespace std;
class BasePhone{
    public:
    int a_;
    BasePhone(){
        cout<<"父类构造函数"<<endl;
    }
    ~BasePhone(){
        cout<<"父类析构函数"<<endl;
    }
    protected:
    int b_;
    private:
    int c_;//私有成员只是被隐藏，但还是会继承下去

};
class Son:public BasePhone{
    public:
    int d_;
    Son(){
        cout<<"子类构造函数"<<endl;
    }
    ~Son(){
        cout<<"子类析构函数"<<endl;
    }
};
void test1()
{
    cout<<"size of son "<<sizeof(Son)<<endl;//16字节，父类全部继承
    Son s1;//构造时先父后子，析构时先子后父
}
int main(){
    system("chcp 65001");
    test1();
    system("pause");
}