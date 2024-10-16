# cpp11_initializer_list

模板initializer_list是C++11新增的。可使用初始化列表语法将STL容器初始化为一系列值。
如果类有接受initializer_list作为参数的构造函数，则使用语法{}将调用该构造函数。   


所有initializer_list元素的类型都必须相同，但编译器将进行必要的转换，int到double，但是部分窄化转换。   

要在代码中使用initializer_list对象，必须包含头文件initializer_list。   
这个模板类包含成员函数begin( )和end( )，您可使用这些函数来访问列表元素。    
它还包含成员函数size( )，该函数返回元素数。    
