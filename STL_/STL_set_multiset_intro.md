# set/ multiset 容器

所有元素都会在插入时自动被排序  
本质：

+ set/multiset属于**关联式容器**，底层结构是用**二叉树**实现。

set和multiset区别：   

+ set不允许容器中有重复的元素
+ multiset允许容器中有重复的元素

## set构造和赋值

构造：

+ `set<T> st;` //默认构造函数：
+ `set(const set &st);` //拷贝构造函数   

赋值：

+ `set& operator=(const set &st);` //重载等号操作符   
  
set容器插入数据时用insert

## set大小和交换

+ `size();` //返回容器中元素的数目
+ `empty();` //判断容器是否为空
+ `swap(st);` //交换两个集合容器

## 插入和删除

+ `insert(elem);` //在容器中插入元素。
+ `clear();` //清除所有元素
+ `erase(pos);` //删除pos迭代器所指的元素，返回下一个元素的迭代器。
+ `erase(beg, end);` //删除区间[beg,end)的所有元素 ，返回下一个元素的迭代器。
+ `erase(elem);` //删除容器中值为elem的元素。

## set查找和统计

+ `find(key);` //查找key是否存在,若存在，返回该键的元素的迭代器；若不存在，返回set.end();
+ `count(key);` //统计key的元素个数 set 返回0，1；multiset 可能大于1

## set和multiset区别

+ set不可以插入重复数据，而multiset可以
+ set插入数据的同时会返回插入结果，表示插入是否成功，返回pair<迭代器，bool>
+ multiset不会检测数据，因此可以插入重复数据

## set容器排序

利用仿函数，可以改变排序规则   

对于自定义数据类型，set必须指定排序规则才可以插入数据  

# 无序关联容器

与关联容器一样，无序关联容器也将值与键关联起来，并使用键来查找值。但底层的差别在于，关联容器是基于树结构的，而无序关联容器是基于数据结构哈希表的，这旨在提高添加和删除元素的速度以及提高查找算法的效率。有4种无序关联容器，它们是unordered_set、unordered_multiset、unordered_map和unordered_multimap