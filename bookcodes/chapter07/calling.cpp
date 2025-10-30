// calling.cpp -- 定义、原型化和调用函数
#include <iostream>

void simple();    // 函数原型

int main()
{
    using namespace std;
    cout << "main()将调用simple()函数：\n";
    simple();     // 函数调用
	cout << "main()已完成simple()函数的调用。\n";
    // cin.get();
    return 0;
}

// 函数定义
void simple()
{
    using namespace std;
    cout << "我只是一个简单的函数。\n";
}
