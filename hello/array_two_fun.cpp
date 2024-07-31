//函数和二维数组
#include<iostream>
using namespace std;

//int sum(int (*ar2)[4],int size);//声明一个由4个指向int的指针组成的数组,ar2是指针而不是数组
int sum(int ar2[][4],int size);
int main()
{
    system("chcp 65001");

    int data[3][4]{
        {1,2,3,8},
        {4,5,6,7},
        {8,9,10,11}
    };
    int t1=sum(data,3);
    cout<<t1<<endl;



    system("pause");
    return 0;
}
int sum(int ar2[][4],int size){
    int total=0;
    for (int i = 0; i < size; i++)
        for (int c = 0; c < 4; c++)
            total+=ar2[i][c];//将ar2看作是一个二维数组的名称
    
    cout<<"ar2: "<<ar2<<endl;
    cout<<"ar2+1: "<<ar2+1<<endl;cout<<"ar2+2: "<<ar2+2<<endl;
    cout<<"*(ar2+1): "<<*(ar2+1)<<endl;cout<<"*(ar2+2): "<<*(ar2+2)<<endl;
    cout<<"*(ar2+1)+1: "<<*(ar2+1)+1<<endl;
    cout<<"*(*(ar2+1)+1): "<<*(*(ar2+1)+1)<<endl;
    cout<<"ar2[1][1]: "<<ar2[1][1]<<endl;
    return total;
}