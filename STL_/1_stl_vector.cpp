//vector 存放数据 
//二维 数组
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>//标准算法
using namespace std;

class Person{
    private:
    int age_;
    string name_;
    public:
    Person(int age,string name):age_(age),name_(name){}

};
void printvect(int val){
    cout<<val<<endl;
}
void test1(){
    vector<int> v;
    //插入数据
    v.push_back(19);
    v.push_back(29);
    v.push_back(39);
    v.push_back(49);

    //迭代器
    vector<int>::iterator itBe=v.begin();//起始迭代器，指向容器中第一个元素
    auto itEn=v.end();//结束迭代器，指向最后一个元素的下个位置 pass-the-end 便于在末尾添加元素

    //遍历1
    while (itBe!=itEn)
    {
        cout<<*itBe<<endl;
        itBe++;
    }
    
    //遍历2
    for_each(v.begin(),v.end(),printvect);

    //遍历3
    for(auto x:v)
        printvect(x);
}

void test2(){
    vector<Person> v;
    Person p1(100,"jack");
    Person p2(200,"james");
    Person p3(300,"kurry");
    Person p4(400,"durant");

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
}

void test3(){
    vector<vector<int>> v;
    vector<int> v1{1,2,3,4},v2{11,12,13,14},
            v3{22,33,44,55},v4{66,7,88,9};
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);
    cout<<"------------------------"<<endl;
    for(auto i=v.begin();i!=v.end();i++){
        //(*i)----容器vector<int>
        for(auto j:(*i))
            cout<<j<<"  ";
        cout<<endl;
    }
}
int main(){
    system("chcp 65001");
    test3();
    system("pause");
}