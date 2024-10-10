# map mulitmap

+ map中所有元素都是pair
+ pair中第一个元素为key（键值），起到索引作用，第二个元素为value（实值） 类似于学号和姓名   
+ 所有元素都会根据元素的键值自动排序

本质：
+ map/multimap属于关联式容器，底层结构是用二叉树实现。

优点：

+ 可以根据key值快速找到value值

map和multimap区别：
+ map不允许容器中有重复**key值**元素
+ multimap允许容器中有重复key值元素

## 构造和赋值

构造：
+ map<T1, T2> mp; //map默认构造函数:
+ map(const map &mp); //拷贝构造函数

赋值：
+ map& operator=(const map &mp); //重载等号操作符

## map大小和交换

+ size(); //返回容器中元素的数目
+ empty(); //判断容器是否为空
+ swap(st); //交换两个集合容器

## 插入和删除

+ insert(elem); //在容器中插入元素。
+ clear(); //清除所有元素
+ erase(pos); //删除pos**迭代器**所指的元素，返回下一个元素的迭代器。
+ erase(beg, end); //删除区间[beg,end)的所有元素 ，返回下一个元素的迭代器。
+ erase(key); //删除容器中值为key的元素。

```
    m1.insert(pair<int,string>(2,"James"));
    m1.insert(make_pair(3,"John"));
```

## 查找和统计

+ `find(key);` //查找key是否存在,若存在，返回该键的元素的迭代器；若不存在，返回`map.end()`;
+ `count(key); `//统计key的元素个数

## 容器排序

仿函数