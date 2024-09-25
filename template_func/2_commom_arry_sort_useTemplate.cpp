//对通用数组排序
//大到小 选择排序
#include<iostream>
using namespace std;
template<class T>
void myswap(T& a,T& b){
    T temp=a;
    a=b;b=temp;
}

template<class T>
void mySort(T arr[],int len){
    for (int i = 0; i < len; i++)
    {
        int max=i;
        for (int j = i; j<len; j++)
        {
            if(arr[max]<arr[j])
                max=j;
        }
        if(max!=i)
        {
            myswap(arr[i],arr[max]);
        }
    }
}
//打印函数模板
template<class T>
void printArray(T arr[]){
    cout<<arr<<endl;
}
void test1(){
    char a1[]="adgoie";
    mySort(a1,sizeof(a1)/sizeof(char));
    printArray(a1);

}
int main(){
    system("chcp 65001");
    test1();
    system("pause");
}

