# vector

+ 和数组类似，可动态扩展  
+ 动态扩展时并非原空间之后接新空间，而是找更大的内存空间，进行拷贝  
+ 前端封闭，尾部通过`push_back()  pop_back()`插入删除数据  
第一个元素`front()`,最后一个`back()`  
+ 迭代器：`read()第一个元素前一个位置 begin()第一个元素 rbegin()最后一个元素位置 end()超出结尾`  支持随机访问   

## 构造
```
vector<T> v; //采用模板实现类实现，默认构造函数
vector(v.begin(), v.end()); //将v[begin(), end())区间中的元素拷贝给本身。 前闭后开注意
vector(n, elem); //构造函数将n个elem拷贝给本身。
vector(const vector &vec); //拷贝构造函数。
```   
还可以像数组一样初始化  

## 赋值

等号赋值
```
vector& operator=(const vector &vec);//重载等号操作符
assign(beg, end); //将[beg, end)区间中的数据拷贝赋值给本身。
assign(n, elem); //将n个elem拷贝赋值给本身。
```  

## 容量和大小


+ empty(); //判断容器是否为空

+ capacity(); //容器的容量

+ size(); //返回容器中元素的个数

+ resize(int num); //重新指定容器的长度为num，若容器变长，则以默认值填充新位置。如果容器变短，则末尾超出容器长度的元素被删除。 **容量不变**

+ resize(int num, elem); //重新指定容器的长度为num，若容器变长，则以elem值填充新位置。如果容器变短，则末尾超出容器长度的元素被删除


## 插入和删除

+ `push_back(ele);` //尾部插入元素ele
+ `pop_back(); `//删除最后一个元素
+ `insert(const_iterator pos, ele);` //迭代器指向位置pos插入元素ele
+ `insert(const_iterator pos, int count,ele);`//迭代器指向位置pos插入count个元素ele
+ `erase(const_iterator pos);` //删除迭代器指向的元素
+ `erase(const_iterator start, const_iterator end);`//删除迭代器从start到end之间的元素
+ `clear();` //删除容器中所有元素  
注意插入删除要用迭代器   

c++11中可以使用`emplace_back()`;允许开发者传递构造函数所需的参数，而这些参数将被用来在容器内部直接构造对象。  
```
std::vector<MyClass> vec;
vec.emplace_back(arg1, arg2, arg3); // 直接在容器末尾构造对象
```
这种方式避免了首先创建一个临时MyClass对象，然后再将其复制或移动到vector中的步骤  

## 数据存取

+ `at(int idx);` //返回索引idx所指的数据  
+ `operator[];` //返回索引idx所指的数据  
+ `front(); `//返回容器中第一个数据元素  
+ `back(); `//返回容器中最后一个数据元素  

## 互换容器

`swap(vec);` // 将vec与本身的元素互换  
`vector<int>(v1).swap(v1);`  
+ `vector<int>(v1)`匿名对象 拷贝构造函数创建新对象 按v1来初始化这个匿名对象   
+ `swap(v1)` 容器交换   
+ 系统销毁匿名对象   

## 预留空间

减少vector在动态扩展容量时的扩展次数   
`reserve(int len);`//容器预留len个元素长度，预留位置不初始化，元素不可访问。  
