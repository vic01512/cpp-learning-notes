//深拷贝和浅拷贝
#include<iostream>
#include<string>
using namespace std;

class Person
{
private:

public:
    int ege_;int* height_;
    Person(){
        cout<<"Person 默认构造函数调用"<<endl;
    }
    Person(int ege,int height){
        ege_=ege;
        height_=new int(height);
        cout<<"Person 构造函数调用(int ege)"<<endl;
    }
    Person(const Person& p){
        cout<<"Person 拷贝构造函数"<<endl;
        ege_=p.ege_;
        //height_=p.height_;编译器默认
        height_=new int(*p.height_);

    }
    ~Person(){
        //释放堆区
        if(height_!=NULL){
            delete height_;
            height_=NULL;//防止野指针
        }
        cout<<"Person 析构函数调用"<<endl;
    };
};
void test1(){
    Person p1(10,140);
    cout<<"年龄： "<<p1.ege_<<"   身高为："<<*p1.height_<<endl;
    Person p2(p1);//默认拷贝函数，此时复制了height的堆区指针地址
    cout<<"年龄： "<<p2.ege_<<"   身高为："<<*p2.height_<<endl;
    //先进后出，如果p2析构函数调用，堆区内存释放，p1再次释放同一块内存，非法操作，这是浅拷贝的问题
    //深拷贝再堆区再申请一块内存
}

int main(){
    system("chcp 65001");
    test1();
    system("pause");
}