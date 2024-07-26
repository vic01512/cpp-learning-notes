#include<iostream>
#include<string>
using namespace std;


int main(){
    system("chcp 65001");
    //转义字符
    cout<<"hello\n";
    cout<<"hahaha\tendline\n";
    cout<<"haha\tendline\n";
    string zifu="hellolljd";
    cout<<zifu<<endl;
    zifu[1]='h';
    cout<<zifu<<endl;
    
    bool panduan1=false;
    bool pand=1;
    cout<<pand<<endl<<panduan1<<endl;
    std::cin.get();
    return 0;
}