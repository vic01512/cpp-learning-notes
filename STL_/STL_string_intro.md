# STRING

C++ 风格的字符串 是一个类  
string内部封装了char*，管理这个字符串，是一个char*类的容器  
事实上能够使用基于类型wchar_t、char16_t、char32_t和char的字符串。  

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

## 赋值操作

通过重载的`=`和`assign`赋值  

## 字符串拼接

通过`+=`和`append`  实现字符串末尾拼接字符串  

`string& operator+=(const string& str);`重载了加号+，两个string类的字符串可以直接相加  
`string& operator+=(const char* str);`重载了加号+，可以与char*的字符串直接相加;  
`string& operator+=(const char c);`重载了加号+，可以与char的单个字符直接相加  
    
`string& append(const char* str);`  
`string& append(const char* str,int n);`  
`string& append(const string& str);`  
`string& append(const string& str, int pos,int n);`  

## 查找和替换

查找 find 查找字符串第一次出现的位置    
`rfind` 查找 字符串最后一次出现的位置  

替换   
使用位置和计数替换  
```   
void replace(size_t pos1, size_t count, const string& str);   
void replace(size_t pos1, size_t count, const char* s);   
void replace(size_t pos1, size_t count, size_t count2, char c);  
pos1：开始替换的位置的索引。
count：要替换的字符数。
str 或 s：用于替换的新字符串。
count2 和 c：用count2个字符c替换原字符串中的count个字符。
```   
使用迭代器进行替换  
```
void replace(iterator i1, iterator i2, const string& str);  
void replace(iterator i1, iterator i2, const char* s);  
void replace(iterator i1, iterator i2, size_t count, char c);
i1 和 i2：定义要替换的字符范围的迭代器。
str 或 s：用于替换的新字符串。
count 和 c：用count个字符c替换原字符串中由迭代器定义的范围内的字符。
```   
使用子串进行替换   
```
void replace(const_iterator i1, const_iterator i2, const string& str, size_t pos, size_t count);  
void replace(size_t pos1, size_t count1, const string& str, size_t pos, size_t count);
i1 和 i2 或 pos1 和 count1：定义要替换的字符范围。
str：源字符串，从中提取子串进行替换。
pos：在str中开始提取子串的位置。
count：从str中提取的字符数。
```

## 字符串比较

按照字符串ascii值比较，逐个挨个对比。   
```  
int compare(const string& str) const noexcept;  
int compare(const char* s) const;
```  

##  字符串存取

通过`[]`和`at(int)`  

## 字符串插入和删除

`重载的insert   erase(int pos,int n)`   

## 子串

`string substr(int pos=0,int n=npos) const`返回从pos开始的n个字符组成的字符串  

## 内存管理

C++实现分配一个比实际字符串大的内存块，为字符串提供了增大空间。然而，如果字符串不断增大，超过了内存块的大小，程序将分配一个大小为原来两倍的新内存块以提供足够的增大空间，避免不断地分配新的内存块。  
方法capacity()返回当前分配给字符串的内存块的大小，而reserve()方法让您能够请求内存块的最小长度。  
