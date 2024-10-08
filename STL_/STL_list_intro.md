# list 链表

链表（list）是一种物理存储单元上非连续的存储结构，数据元素的逻辑顺序是通过链表中的指针链接实现的

链表的组成：链表由一系列结点组成

结点的组成：一个是存储数据元素的数据域，另一个是存储下一个结点地址的指针域

STL中的链表是一个**双向循环链表**      

由于链表的存储方式并不是连续的内存空间，因此链表list中的迭代器只支持前移和后移，属于双向迭代器   

list的优点：   

+ 采用动态存储分配，不会造成内存浪费和溢出
+ 链表执行插入和删除操作十分方便，修改指针即可，不需要移动大量元素

list的缺点：  

+ 链表灵活，但是空间(指针域) 和 时间（遍历）额外耗费较大
+ List有一个重要的性质，插入操作和删除操作都不会造成原有list迭代器的失效，这在vector是不成立的。

总结：**STL中List和vector是两个最常被使用的容器**，各有优缺点    

## 构造

类似于数组   
+ `list<T> lst;` //list采用采用模板类实现,对象的默认构造形式：
+ `list(beg,end);` //构造函数将[beg, end)区间中的元素拷贝给本身。
+ `list(n,elem);` //构造函数将n个elem拷贝给本身。
+ `list(const list &lst);` //拷贝构造函数。

## 赋值和交换

+ `assign(beg, end);` //将[beg, end)区间中的数据拷贝赋值给本身。
+ `assign(n, elem);` //将n个elem拷贝赋值给本身。
+ `list& operator=(const list &lst);` //重载等号操作符
+ `swap(lst);` //将lst与本身的元素互换。

## 大小操作

+ `ize();` //返回容器中元素的个数

+ `empty();` //判断容器是否为空

+ `resize(num);` //重新指定容器的长度为num，若容器变长，则以默认值填充新位置。如果容器变短，则末尾超出容器长度的元素被删除。

+ `resize(num, elem);` //重新指定容器的长度为num，若容器变长，则以elem值填充新位置。如果容器变短，则末尾超出容器长度的元素被删除。

## 插入和删除

+ `push_back(elem);`//在容器尾部加入一个元素
+ `pop_back();`//删除容器中最后一个元素
+ `push_front(elem);`//在容器开头插入一个元素
+ `pop_front();`//从容器开头移除第一个元素
+ `insert(pos,elem);`//在pos位置插elem元素的拷贝，返回新数据的位置。**用迭代器**  
+ `insert(pos,n,elem);`//在pos位置插入n个elem数据，无返回值。
+ `insert(pos,beg,end);`//在pos位置插入[beg,end)区间的数据，无返回值。
+ `clear();`//移除容器的所有数据
+ `erase(beg,end);`//删除[beg,end)区间的数据，返回下一个数据的位置。
+ `erase(pos);`//删除pos位置的数据，返回下一个数据的位置。
+ `remove(elem);`//删除容器中所有与elem值匹配的元素。

##  数据存取

+ `front();` //返回第一个元素。
+ `back();` //返回最后一个元素。

非连续空间 ，迭代器不支持随机访问，不能用[]和at跳跃式访问   

##  反转和排序

+ `reverse();` //反转链表
+ `sort();` //链表排序  默认升序 

这是成员函数，所有不支持迭代器随机访问的容器都不可以用标准算法  

