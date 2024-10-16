#include<vector>
#include<iostream>
using namespace std;

void test1(){
    vector<double> payment {2.11,3,45,33.33};
    /*这将创建一个包含4个元素的容器，并使用列表中的4个值来初始化
这些元素。这之所以可行，是因为容器类现在包含将initializer_list<T>
作为参数的构造函数。*/
    vector<double> payment1 ({2.11,3,45,33.33});//显示指定，两者等价
    //如果类有接受initializer_list作为参数的构造函数，则使用语法{}将调用该构造函数。
    cout<<payment[2]<<endl;
}


int main() {
    system("chcp 65001");
	test1();

	system("pause");

	return 0;
}