//访问权限
#include<iostream>
using namespace std;
//公共权限 类内类外都可以访问
//保护权限 类内可以访问，类外不行 儿子可以访问父亲中的保护内容 继承
//私有权限 类内可以访问，类外不行
class Person
{
private:
    int Password;//成员属性私有，控制读写权限，写时验证数据有效性
protected:
    int car_number;
public:
    string Name;
    void InitPerson(){
        Name="James Jone";
        car_number=2;
        Password=12344;
    }
};

int main(){
    Person p1;
    p1.InitPerson();
    cin.get();
    cin.get();
}