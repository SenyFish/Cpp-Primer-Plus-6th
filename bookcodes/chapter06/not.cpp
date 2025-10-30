// not.cpp -- 使用not运算符
#include <iostream>
#include <climits>
bool is_int(double); 
int main()
{
    using namespace std;
    double num;

    cout << "嘿，朋友！请输入一个整数值：";
    cin >> num;
    while (!is_int(num))    // 当num不是可转换为int时继续
    {
        cout << "超出范围 -- 请重试：";
        cin >> num;
    }
    int val = int (num);    // 类型转换
    cout << "你输入的整数是" << val << "\n再见\n";
    // cin.get();
    // cin.get();
    return 0;
}

bool is_int(double x)
{
    if (x <= INT_MAX && x >= INT_MIN)   // 使用climits值
        return true;
    else
        return false; 
}
