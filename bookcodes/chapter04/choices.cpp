// choices.cpp -- 数组的变体
#include <iostream>
#include <vector>   // STL C++98
#include <array>    // C++0x
int main()
{
    using namespace std;
// C，原始C++
    double a1[4] = {1.2, 2.4, 3.6, 4.8};
// C++98 STL
    vector<double> a2(4);   // 创建有4个元素的vector
// C98中没有简单的初始化方法
    a2[0] = 1.0/3.0;
    a2[1] = 1.0/5.0;
    a2[2] = 1.0/7.0;
    a2[3] = 1.0/9.0;
// C++0x -- 创建并初始化array对象
    array<double, 4> a3 = {3.14, 2.72, 1.62, 1.41};  
    array<double, 4> a4;
    a4 = a3;     // 对于相同大小的array对象有效
// 使用数组表示法
    cout << "a1[2]：" << a1[2] << "，地址 " << &a1[2] << endl;
    cout << "a2[2]：" << a2[2] << "，地址 " << &a2[2] << endl;
    cout << "a3[2]：" << a3[2] << "，地址 " << &a3[2] << endl;
    cout << "a4[2]：" << a4[2] << "，地址 " << &a4[2] << endl;
// 错误操作
    a1[-2] = 20.2;
    cout << "a1[-2]：" << a1[-2] <<"，地址 " << &a1[-2] << endl;
    cout << "a3[2]：" << a3[2] << "，地址 " << &a3[2] << endl;
    cout << "a4[2]：" << a4[2] << "，地址 " << &a4[2] << endl;
    //  cin.get();
    return 0;
}