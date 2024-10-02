#include<string>
#include<iostream>
using namespace std;
//string赋值 比较  存取  子串

void test1(){
    string str1;
    str1="hello world";
    string str2;
    str2=str1;
    string str3;
    str3='a';

    string str4;
    str4.assign("hello");
    string str5;
    str5.assign("hello world",5);
    string str6;
    str6.assign(str5);
    string str7;
    str7.assign(10,'a');

    cout<<str5<<endl;
    cout<<str6<<endl;
    if(str5.compare(str6)==0)
        cout<<"相等"<<endl;
        
    cout<<str5[2]<<endl;
    cout<<str6.at(2)<<endl;

    //子串
    string str8=str1.substr(2,5);
    cout<<str8<<endl;
}

int main(){
    system("chcp 65001");
    test1();
    system("pause");
}