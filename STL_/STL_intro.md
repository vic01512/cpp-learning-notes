# 基本介绍

STL 标准模板库 复用 泛型编程  
广义上分为 容器 算法 迭代器  容器和算法之间通过迭代器连接  
基于范围的for循环  

## 六大组件

容器：各种数据结构 vector,list;  
算法：各种常用算法  
迭代器：  
仿函数：行为类似函数，可作为算法的某种策略  重载小括号  
适配器：修饰接口  
空间配置器：空间的配置和管理  

## 容器

序列式容器：有序  
关联式容器：二叉树，各元素之间没有严格物理上的顺序关系  

## 算法

质变算法：更改内容  
非质变算法：  

## 迭代器

算法通过迭代器访问容器中的元素  
每个容器有专属的迭代器  
广义指针  
c++11 增加了`a.cbegin()  a.cend()`两个const迭代器   
