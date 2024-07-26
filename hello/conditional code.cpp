#include<iostream>
#include<string>
using namespace std;


int main(){
    system("chcp 65001");
    cout<<"please type in your score:"<<endl;
    int ss=0;
    cin>>ss;
    
    if(ss>=600)
    cout<<"yiben"<<endl;
    else if (ss>500)
    {
    cout<<"erben"<<endl;
    }
    else
    cout<<"laji"<<endl;
//三目
    ss>600?cout<<"zhejiang uni"<<endl:cout<<"lower than zhejiang uni"<<endl;
    switch(ss)
    {
        case(600):cout<<"congratulations for 600 score, we will give you a 600-big present"<<endl;
        break;
        case(550):cout<<"congratulations for 550 score, we will give you a 550-big present"<<endl;break;
        case(500):cout<<"congratulations for 500 score, we will give you a 500-big present"<<endl;break;
        default:cout<<"congratulations you have won 1000 dollars\n";


    }



    system("pause");
    return 0;
   }