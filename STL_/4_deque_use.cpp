#include <deque>
#include<iostream>
#include<algorithm>
using namespace std;

void printDeque(const deque<int>& d) 
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		cout << *it << " ";

	}
	cout << endl;
}
//deque构造
void test1() {

	deque<int> d1; //无参构造函数
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);
	deque<int> d2(d1.begin(),d1.end());
	printDeque(d2);

	deque<int>d3(10,100);
	printDeque(d3);

	deque<int>d4 = d3;
	printDeque(d4);
}
void test2(){
    //插入和删除
    deque<int> d1{1,2,3,4,5,6};
    d1.pop_back();
    d1.push_back(10);
    d1.pop_front();
    d1.push_front(0);
    printDeque(d1);

    //指定位置
    d1.insert(d1.begin(),2,1000);
    printDeque(d1);

    d1.erase(d1.begin()+2);
    printDeque(d1);

    //排序
    sort(d1.begin(),d1.end());
    printDeque(d1);
}

int main(){
    system("chcp 65001");
    test2();
    system("pause");
}