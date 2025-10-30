// static.cpp -- 使用静态局部变量
#include <iostream>
// 常量
const int ArSize = 10;

// 函数原型
void strcount(const char * str);

int main()
{
    using namespace std;
    char input[ArSize];
    char next;

    cout << "请输入一行：\n";
    cin.get(input, ArSize);
    while (cin)
    {
        cin.get(next);
        while (next != '\n')    // 字符串不适合！
            cin.get(next);      // 清除剩余部分
        strcount(input);
        cout << "请输入下一行（空行退出）：\n";
        cin.get(input, ArSize);
    }
    cout << "再见\n";
// code to keep window open for MSVC++
/*
cin.clear();
    while (cin.get() != '\n')
        continue;
    cin.get();
*/
    return 0;
}

void strcount(const char * str)
{
    using namespace std;
    static int total = 0;        // 静态局部变量
    int count = 0;               // 自动局部变量

    cout << "\"" << str <<"\"包含";
    while (*str++)               // 转到字符串末尾
        count++;
    total += count;
    cout << count << "个字符\n";
    cout << "总共" << total << "个字符\n";
}
