#include<iostream>
using namespace std;

const int superMonth=31;
#define smallMonth 30//宏变量注意 不加分号

int main(){
    std::cout<<"hello"<<std::endl<<"cly"<<endl;
    //这是注释
    int a {33};
    cout<<"a="<<a<<endl;
    cout<<superMonth<<endl;
    cout<<smallMonth<<endl;

    system("chcp 65001");
    cout<<"int占据的字节 "<<sizeof(int)<<endl;

    float aa=3.24f;
    float a1=3e3;
    float a2=2e-2f;

    char c1='a';
    cout<<int(c1)<<endl;
    std::cin.get();
    return 0;
}