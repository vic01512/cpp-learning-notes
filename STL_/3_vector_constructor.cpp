//vector构造函数
//容量大小
#include<vector>
#include<iostream>
using namespace std;
void test1(){
    vector<int> v1;
    for(int i=0;i<10;i++){
        v1.push_back(i);
    }
    for(int x:v1)
        cout<<x<<endl;
    vector<int>v2(v1.begin(),v1.end());
    vector<int>v3(5,100);
    for(int x:v3)
        cout<<x<<endl;
    vector<int>v4(v3);
    vector<int>v5{11,12,33,44};
    for(int x:v5)
        cout<<x<<endl;
}

int main(){
    system("chcp 65001");
    test1();
    system("pause");
}