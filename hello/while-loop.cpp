#include<iostream>
#include<string>
#include <random>
using namespace std;
int main()
{
    std::random_device rd;  // 用于获得种子
    std::mt19937 gen(rd()); // 初始化随机数生成器，这里使用了Mersenne Twister算法
    std::uniform_int_distribution<> distrib(0, 100); // 定义分布范围[10, 100]
    int a=distrib(gen);
    cout<<"please put in your first guess (intergral num)"<<endl;
    int b=-1;
    cin>>b;
    while (b!=a)
    {
        if (b>a)
        cout<<"your number is larger than the target."<<endl;
        else
        cout<<"your number is smaller than the target."<<endl;
        cout<<"please try again."<<endl;
        cin>>b;

    }
cout<<"congratulations. the correct number is "<<b<<endl;

    system("pause");
    return 0;
}