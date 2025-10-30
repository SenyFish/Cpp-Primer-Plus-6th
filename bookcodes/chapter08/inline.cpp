// inline.cpp -- 使用内联函数
#include <iostream>

// 内联函数定义
inline double square(double x) { return x * x; }
int main()
{
    using namespace std;
    double a, b;
    double c = 13.0;

    a = square(5.0);
    b = square(4.5 + 7.5);   // 可以传递表达式
    cout << "a = " << a << ", b = " << b << "\n";
    cout << "c = " << c;
    cout << ", c的平方 = " << square(c++) << "\n";
    cout << "现在c = " << c << "\n";
    // cin.get();
    return 0;  
}
