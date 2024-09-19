//继承基本语法
#include<iostream>
using namespace std;

class Page{
    public:
    void fro(){
        cout<<"登录、注册。。"<<endl;
    }
    void bot(){
        cout<<"电话，标志"<<endl;
    }
    void lef(){
        cout<<"相关信息"<<endl;
    }
};
class Java:public Page//公共继承
{
public:
    void jav(){
        cout<<"JAVA相关信息"<<endl;
    }
};
class Python:public Page
{
public:
    void pyt(){
        cout<<"Python相关信息"<<endl;
    }
};
void test1(){
    Java j1;
    j1.bot();
    j1.fro();
    j1.jav();
    j1.lef();
    cout<<"------------"<<endl;
    Python p1;
    p1.bot();
    p1.fro();
    p1.pyt();
    p1.lef();
}
//仿函数灵活 
int main(){
    system("chcp 65001");
    test1();
    system("pause");
}