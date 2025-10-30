// arraynew.cpp -- 对数组使用new运算符
#include <iostream>
int main()
{
    using namespace std;
    double * p3 = new double [3]; // 为3个double分配空间
    p3[0] = 0.2;                  // 将p3当作数组名使用
    p3[1] = 0.5;
    p3[2] = 0.8;
    cout << "p3[1]是 " << p3[1] << "。\n";
    p3 = p3 + 1;                  // 指针递增
    cout << "现在p3[0]是 " << p3[0] << "，";
    cout << "p3[1]是 " << p3[1] << "。\n";
    p3 = p3 - 1;                  // 指回开始位置
    delete [] p3;                 // 释放内存
    // cin.get();
    return 0; 
}
