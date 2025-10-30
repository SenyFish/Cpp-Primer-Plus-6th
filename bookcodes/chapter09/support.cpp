// support.cpp -- 使用外部变量
// 与external.cpp一起编译
#include <iostream>
extern double warming;  // 使用另一个文件的warming

// 函数原型
void update(double dt);
void local();

using std::cout;
void update(double dt)      // 修改全局变量
{
    extern double warming;  // 可选的重新声明
    warming += dt;          // 使用全局warming
    cout << "将全球变暖更新为" << warming;
    cout << "度。\n";
}

void local()                // 使用局部变量
{
    double warming = 0.8;   // 新变量隐藏外部变量

    cout << "局部变暖 = " << warming << "度。\n";
        // 使用作用域解析运算符
        // 访问全局变量
    cout << "但全球变暖 = " << ::warming;
    cout << "度。\n";
}
