#include <map>
#include<string>
#include<iostream>
using namespace std;

void test1(){
    map<int,string>m1;

    m1.insert(pair<int,string>(1,"Jack"));
    m1.insert(pair<int,string>(2,"James"));
    m1.insert(make_pair(3,"John"));
    m1[4]="King";//不建议使用,插入错误会修改键值而非报错
    for(auto it:m1)
    cout<<"学号："<<it.first<<" 姓名："<<it.second<<endl;

    cout<<m1[4]<<endl;//[]找到键值
}

int main(){
    system("chcp 65001");
    test1();

    system("pause");
}