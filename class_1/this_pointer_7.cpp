//this指针
#include<iostream>
using namespace std;
//只会产生一份函数实例，同类型多个对象共用一块代码
//this指针指向被调用的成员函数所属的对象

//形参和成员变量同名时，解决名称冲突
//返回对象本身，return* this

class Person
{
public:
    int age_;
    Person(int age):age_(age){}
    // void PersonAddAge(Person& p){
    //     age_+=p.age_;
    // }
    Person& PersonAddAge(Person& p){//注意引用方式返回，值方式返回会创建一个新对象
        this->age_+=p.age_;
        return *this;
    }
};
void test1(){
    Person p1(10);
    Person p2(10);
    p2.PersonAddAge(p1);
    p2.PersonAddAge(p1).PersonAddAge(p1);
    cout<<p2.age_<<endl;
}
int main(){
    system("chcp 65001");
    test1();
    system("pause");
}