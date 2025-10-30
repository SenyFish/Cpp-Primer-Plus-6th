// cctypes.cpp -- 使用ctype.h库
#include <iostream>
#include <cctype>              // 字符函数原型
int main()
{
    using namespace std;
    cout << "输入文本进行分析，输入@"
            "终止输入。\n";
    char ch;  
    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;

    cin.get(ch);                // 获取第一个字符
    while (ch != '@')            // 测试哨兵值
    {
        if(isalpha(ch))         // 是字母字符吗？
            chars++;
        else if(isspace(ch))    // 是空白字符吗？
            whitespace++;
        else if(isdigit(ch))    // 是数字吗？
            digits++;
        else if(ispunct(ch))    // 是标点符号吗？
            punct++;
        else
            others++;
        cin.get(ch);            // 获取下一个字符
    }
    cout << chars << "个字母，"
         << whitespace << "个空白，"
         << digits << "个数字，"
         << punct << "个标点符号，"
         << others << "个其他字符。\n";
    // cin.get();
    // cin.get();
    return 0; 
}
