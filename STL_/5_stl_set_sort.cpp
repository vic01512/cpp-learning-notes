#include <set>
#include<iostream>
using namespace std;
//利用利用仿函数，可以改变排序规则   
//默认为从小到达排序

class Mycompare{
public:
    bool operator()(int v1,int v2)const{
        return v1>v2;
    }
};

class Person
{
public:
    int age_;
    Person(int age):age_(age){}
};
class MycomparePerson{
public:
    bool operator()(const Person& v1,const Person& v2)const{
        return v1.age_>v2.age_;
    }
};
void test1(){
    set<int>s1;
    s1.insert(20);
    s1.insert(40);
    s1.insert(410);
    s1.insert(60);
    s1.insert(90);
    for(set<int>::iterator it=s1.begin();it!=s1.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    //按照指定规则排序
    set<int,Mycompare>s2;
    s2.insert(20);
    s2.insert(40);
    s2.insert(410);
    s2.insert(60);
    s2.insert(90);
    for(set<int,Mycompare>::iterator it=s2.begin();it!=s2.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

void test2(){
//对于自定义数据类型，set必须指定排序规则才可以插入数据  
    set<Person,MycomparePerson>s1;
    Person p1(10);
    Person p2(20);
    Person p3(60);
    Person p4(15);

    s1.insert(p1);
    s1.insert(p2);
    s1.insert(p3);
    s1.insert(p4);
    for(set<Person,MycomparePerson>::iterator it=s1.begin();it!=s1.end();it++)
    {
        cout<<it->age_<<" ";
    }
    cout<<endl;
}

int main(){
    system("chcp 65001");
    test1();
    test2();
    system("pause");
}