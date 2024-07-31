#include<iostream>
#include<string>

using namespace std;
struct school
{
    string name;
    int stu_number=0;
    int teacher_num=0;
};
void printSchool(const school *a);

int main()
{
    system("chcp 65001");

    school sc1={"AKA",3000,600};//初始化
    school sc2=sc1;//初始化
    school *scp=&sc1;
    //指针指向结构体，访问成员
    scp->name="纯真";
    (*scp).stu_number=3001;

    //结构体数组
    school HuaNan[2]{
        {"H1",4000,400},
        {"H2",5000,500}
    };//huanan是一个数组，而不是结构体，HuaNan[0]是一个结构体，可以使用.

    printSchool(&HuaNan[0]);//结构体函数地址传递

    system("pause");
    return 0;
}
void printSchool(const school *a){
    cout<<"school's name is "<<(*a).name<<endl;
}