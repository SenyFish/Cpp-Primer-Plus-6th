// twofile1.cpp -- 具有外部和内部链接的变量
#include <iostream>     // 与twofile2.cpp一起编译
int tom = 3;            // 外部变量定义
int dick = 30;          // 外部变量定义
static int harry = 300; // static，内部链接
// 函数原型
void remote_access();

int main()
{
    using namespace std;
    cout << "main()报告以下地址：\n";
    cout << &tom << " = &tom, " << &dick << " = &dick, ";
    cout << &harry << " = &harry\n";
    remote_access();
    // cin.get();
    return 0; 
}
