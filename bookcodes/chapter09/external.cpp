// external.cpp -- 外部变量
// 与support.cpp一起编译
#include <iostream>
// 外部变量
double warming = 0.3;       // warming被定义

// 函数原型
void update(double dt);
void local();

int main()                  // 使用全局变量
{
    using namespace std;
    cout << "全球变暖是" << warming << "度。\n";
    update(0.1);            // 调用函数改变warming
    cout << "全球变暖是" << warming << "度。\n";
    local();                // 调用带有局部warming的函数
    cout << "全球变暖是" << warming << "度。\n";
    // cin.get();
    return 0;
}
