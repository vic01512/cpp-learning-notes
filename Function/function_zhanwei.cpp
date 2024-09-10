//占位参数
#include<iostream>
using namespace std;
//占位参数保留数据类型
void func(int a,int){
    cout<<"this is a func\n";
}
int main(){
    int b=9;
    func(b,10);//占位参数必须填补
    cin.get();
    cin.get();
    
}