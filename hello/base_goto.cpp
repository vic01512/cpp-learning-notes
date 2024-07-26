#include<iostream>

using namespace std;
int main()
{
    //goto 标记，跳转到标记位置 =jmp
    cout<<"1111"<<endl;
    goto FLAG1;
    cout<<"2222"<<endl;
    cout<<"33333"<<endl;

    FLAG1:
    cout<<"555"<<endl;

    system("pause");
    return 0;
}