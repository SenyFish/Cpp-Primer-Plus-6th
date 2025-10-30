// twoarg.cpp -- 带有2个参数的函数
#include <iostream>
using namespace std;
void n_chars(char, int);
int main()
{
    int times;
    char ch;

    cout << "请输入一个字符：";
    cin >> ch;
    while (ch != 'q')        // 输入q退出
    {
        cout << "请输入一个整数：";
        cin >> times;
        n_chars(ch, times); // 带有两个参数的函数
        cout << "\n请输入另一个字符或按"
                "q键退出：";
           cin >> ch;
    }
    cout << "times的值为" << times << "。\n";
    cout << "再见\n";
    // cin.get();
    // cin.get();
    return 0;
}

void n_chars(char c, int n) // 显示c n次
{
    while (n-- > 0)         // 继续直到n达到0
        cout << c;
}
