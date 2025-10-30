// pointer.cpp -- 我们的第一个指针变量
#include <iostream>
int main()
{
    using namespace std;
    int updates = 6;        // 声明一个变量
    int * p_updates;        // 声明指向int的指针

    p_updates = &updates;   // 将int的地址赋给指针

// 用两种方式表达值
    cout << "值：updates = " << updates;
    cout << "，*p_updates = " << *p_updates << endl;

// 用两种方式表达地址
    cout << "地址：&updates = " << &updates;
    cout << "，p_updates = " << p_updates << endl;

// 使用指针改变值
    *p_updates = *p_updates + 1;
    cout << "现在updates = " << updates << endl;
    // cin.get();
    return 0; 
}
