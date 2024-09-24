//文件操作
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
//文本文件     二进制文件

void test1(){
    //写
    //创建流对象
    ofstream ofs;
    //指定打开方式
    ofs.open("test.txt",ios::out|ios::trunc);
    //写内容
    ofs<<"yes\n";
    ofs<<"no\n";
    //关闭文件
    ofs.close();
}
void test2(){
    //读
    ifstream ifs;
    ifs.open("test.txt",ios::in);
    //判断是否打开成功
    if(!ifs.is_open())
        {cout<<"打开文件失败！\n";
        return;
        }
    //读数据 4种方式
    //1
    // char buff[1024]{0};
    // while (ifs>>buff)
    // {
    //     cout<<buff<<endl;
    // }
    //2
    // char buff[1024]{0};
    // while (ifs.getline(buff,sizeof(buff)))
    // {
    //     cout<<buff<<endl;
    // }

    //3
    // string st1;
    // while (getline(ifs,st1))
    // {
    //     cout<<st1<<endl;
    // }
    
    //4
    
    

    
    
}
int main(){
    system("chcp 65001");
    test2();
    system("pause");
}


