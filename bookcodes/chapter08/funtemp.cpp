// funtemp.cpp -- 使用函数模板
#include <iostream>
// 函数模板原型
template <typename T>  // 或class T
void Swap(T &a, T &b);

int main()
{
    using namespace std;
    int i = 10;
    int j = 20;
    cout << "i, j = " << i << ", " << j << "。\n";
    cout << "使用编译器生成的int交换器：\n";
    Swap(i,j);  // 生成void Swap(int &, int &)
    cout << "现在i, j = " << i << ", " << j << "。\n";

    double x = 24.5;
    double y = 81.7;
    cout << "x, y = " << x << ", " << y << "。\n";
    cout << "使用编译器生成的double交换器：\n";
    Swap(x,y);  // 生成void Swap(double &, double &)
    cout << "现在x, y = " << x << ", " << y << "。\n";
    // cin.get();
    return 0;
}

// 函数模板定义
template <typename T>  // 或class T
void Swap(T &a, T &b)
{
    T temp;   // temp是T类型的变量
    temp = a;
    a = b;
    b = temp; 
}
