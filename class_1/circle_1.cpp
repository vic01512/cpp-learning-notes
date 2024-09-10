//封装
#include<iostream>
using namespace std;
//设计圆类，求周长
const double PI=3.141592;

class Circle
{
    //访问权限
private:
    /* data */
public:
    double radius;

    double caculationZC(){
        return 2*PI*radius;
    }
};

int main(){
    Circle c1;
    c1.radius=1.5;
    cout<<"the perimeter is "<<c1.caculationZC()<<endl;
    cin.get();
    cin.get();
}