//容量大小
#include<vector>
#include<iostream>
using namespace std;
void test1(){
    vector<int> v1;
    for(int i=0;i<10;i++){
        v1.push_back(i);
    }
    cout<<"容量是:"<<v1.capacity()<<endl;
    cout<<"大小是:"<<v1.size()<<endl;
    v1.resize(20,100);
    cout<<"容量是:"<<v1.capacity()<<endl;
    cout<<"大小是:"<<v1.size()<<endl;
    v1.resize(3,100);
    cout<<"容量是:"<<v1.capacity()<<endl;
    cout<<"大小是:"<<v1.size()<<endl;
}

int main(){
    system("chcp 65001");
    test1();
    system("pause");
}