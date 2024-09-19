//等号运算符重载 属性值拷贝  深拷贝 浅拷贝 堆区问题 
#include<iostream>
using namespace std;
//
class Person{
    public:
    int *ege_;
    Person(int age){
        ege_=new int(age);//创建在堆区，返回指针
    }
    ~Person(){
        if(ege_!=NULL)
        {
            delete ege_;
            ege_=NULL;
        }
    }
    Person& operator=(Person& p1){
        //编译器的浅拷贝
        //ege_=p1.ege_;


        //先判断释放有属性在堆区，有的话先释放干净
        if(ege_!=NULL)
        {
            delete ege_;
            ege_=NULL;
        }
        ege_=new int(*p1.ege_);//深拷贝
        return *this;//返回自身
    }
};
void test1(){
    Person p1(18);
    cout<<"p1的年龄为： "<<p1.ege_<<endl;
    cout<<"p1的年龄为： "<<*p1.ege_<<endl;
    Person p2(20);
    cout<<"p2的年龄为： "<<*p2.ege_<<endl;
    p2=p1;//赋值操作 注意浅拷贝可能带来堆区重复释放，等号应使用深拷贝
    cout<<"p2的年龄为： "<<*p2.ege_<<endl;
}
int main(){
    system("chcp 65001");
    test1();
    system("pause");
}