#include<iostream>
using namespace std;

//地址传递
void swap(int *a,int*b){
    int temp=*a;*a=*b;
    *b=temp;
}
double pam(int);
void estimate(double(*pf)(int));
double *pamf(int);//返回一个指向double的指针

int main(){
    int a=10,b=10;
    int *p=&a;//初始化
    *p=20;//  *  解引用
    cout<<*p<<endl;

    int *ps= new int;//从堆或自由储存区分配内存
    *ps=1001;
    delete ps;//释放内存

    int *p_s=NULL;//空指针

    //const修饰指针
    //常量指针,指针指向可修改，不可修改指向的值
    const int* pc=&a;pc=&b;
    //指针常量,指针指向不可修改，可修改指针指向的值
    int *const p1=&b;*p1=20;

    const int *const p2=&a;//都不能修改

    //大型数据应使用new，
    int *psome=new int[10];
    delete [] psome; //[]释放整个数组

    int *psome1=new int[10];
    psome1[0]=1;psome1[1]=22;//内部使用指针处理数组，指针与数组基本等价
    psome1=psome1+1;//指向第二个元素,增加的量等于它指向的类型的字节数
    cout<<psome1[0]<<endl;
    psome1-=1;
    delete [] psome1;//正确释放

    //指针与字符串
    //cout对象认为char的地址是字符串的地址，因此它打
    //印该地址处的字符，然后继续打印后面的字符，直到遇到空字符
    char flower[10]="rose";
    cout<<flower<<"s are red!\n";

    //函数指针
    cout<<"function_pointer:\n";
    estimate(pam);


    cin.get();

    return 0;
}

double pam(int ls){
    return ls*0.3+ls+1;
}
void estimate(double(*pf)(int)){
    cout<<(*pf)(3)<<"hours\n";
}