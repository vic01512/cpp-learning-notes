#include<iostream>
#include<cstring>

using namespace std;
int main()
{
    system("chcp 65001");
    //一维数组数组名：统计数组长度，首地址
    int arr[] {1,2,3,4,5};
    int arr4[4] {1};//第一个是1 其余为0.
    cout<<"整个数组占据内存空间为："<<sizeof(arr)<<endl;
    cout<<"数组首地址为："<<arr<<endl;
    //二维数组初始化
    int arr1[2][3]{
        {1,2,3},
        {2,3,4}
    };
    int arr2[2][3] {1,2,3,4,5,6};

    //字符串
    char alp='s';
    char name1[]="Jack mole";
    char name[20];
    cout<<"length:"<<strlen(name1)<<endl;
    //cin通过空白确定结束,cin.getline()回车结束
    cin.getline(name,20);
    cout<<name<<endl;
    //cin.get不再读取换行符并丢弃，留在输入队列中。
    cin.get(name,20);
    cout<<name<<endl;
    cin.get();//需要处理换行符。
    cin.clear();//读取空行恢复输入

    //string
    string str1;
    string str2 {"hello"};
    cin>>str1;//自动处理长度 string对象可互相赋值，使用+号可以拼接
    str2=str1;
    string str3=str1+str2;
    cout<<str3<<endl;
    getline(cin,str3);

    cout<<R"(hello "king" hello /n)"<<'/n';//原始字符串，"()"定界


    system("pause");
    return 0;
}