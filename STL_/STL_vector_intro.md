# STRING

C++ 风格的字符串 是一个类
string内部封装了char*，管理这个字符串，是一个char*类的容器

## 9种构造函数

构造函数原型
1 `string();`空字符串
2 `string(const char* s); `通过字符串s初始化
3 `string(const string& s);`通过一个string对象初始化另外一个string对象
4 `string(int n,char a);`使用n个a字符初始化
5 `string(const char* s，size_type n) `指向s的前n个字符
6 `string(iter begin,iter end)` iter为模板类型 初始化为[begin,end)字符串
7 `string(const string& s，string size_type pos, size_type n)` 对象s位置pos开始到结尾的字符，或从pos开始的n个字符
8 `string(string&& str)noexcept` 将一个string对象初始化为string对象str，并可能修改str 
9 `string(initializer_list<char> il)` 初始化为列表中的li
