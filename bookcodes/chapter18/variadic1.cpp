//variadic1.cpp -- 使用递归解包参数包
#include <iostream>
#include <string>
// 0个参数的定义 -- 终止调用
void show_list3() {}

// 1个或多个参数的定义
template<typename T, typename... Args>
void show_list3( T value, Args... args)
{
    std::cout << value << ", ";
    show_list3(args...); 
}

int main()
{
    int n = 14;
    double x = 2.71828;
    std::string mr = "Mr. String objects!";
    show_list3(n, x);
    show_list3(x*x, '!', 7, mr);
    return 0;
}