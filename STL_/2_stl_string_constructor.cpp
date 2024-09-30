// string 的构造函数
// C++ 风格的字符串 是一个类
// string内部封装了char*，管理这个字符串，是一个char*类的容器

/*构造函数原型
1 string();空字符串
2 string(const char* s); 通过字符串s初始化
3 string(const string& s);通过一个string对象初始化另外一个string对象
4 string(int n,char a);使用n个a字符初始化
5 string(const char* s，size_type n) 指向s的前n个字符
6 string(iter begin,iter end) iter为模板类型 初始化为[begin,end)字符串
7 string(const string& s，string size_type pos, size_type n) 对象s位置pos开始到结尾的字符，或从pos开始的n个字符
8 string(string&& str)noexcept 将一个string对象初始化为string对象str，并可能修改str 
9 string(initializer_list<char> il) 初始化为列表中的li
*/


#include<string>
using namespace std;

void test1(){
    char all[]{"this is my house! from wade"}
    string s1;  // 1
    string s2("hello world!");// 2
    string s3(s2);// 3
    string s4(10,a);// 4
    string s5(all,8);// 5
    string s6(all+2,all+10);// 6  all不能是对象，因为不同于数组名会看作为地址，s6不是指针，s6+6没有意义
                            //    而s6[1]是一个char值，&s6[5]是一个地址 可作为参数
    string s6_1(&s6[1],&s6[5]);// 6
    string s7(s5,2); // 7

}
void test2(){
    /*c++11新增的
    构造函数string（string && str）类似于复制构造函数，导致新创建的string为str的副本。
但与复制构造函数不同的是，它不保证将str视为const。这种构造函数被称为移动构造函数（move constructor）。
    构造函数string（initializer_list<char> il）让您能够将列表初始化语法用于string类。
    */
    string blue_person{'L','o','o','p'};
}

int main(){
    system("chcp 65001");
    test1();
    system("pause");
}