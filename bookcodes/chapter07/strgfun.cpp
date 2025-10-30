// strgfun.cpp -- 带有字符串参数的函数
#include <iostream>
unsigned int c_in_str(const char * str, char ch);
int main()
{
    using namespace std;
    char mmm[15] = "minimum";    // 数组中的字符串
// 某些系统需要在char前加static以
// 启用数组初始化

    char *wail = "ululate";    // wail指向字符串

    unsigned int ms = c_in_str(mmm, 'm');
    unsigned int us = c_in_str(wail, 'u');
    cout << mmm << "中有" << ms << "个m字符" << endl;
    cout << wail << "中有" << us << "个u字符" << endl;
    // cin.get();
    return 0;
}

// 此函数计算字符串str中
// ch字符的数量
unsigned int c_in_str(const char * str, char ch)
{
    unsigned int count = 0;

    while (*str)        // 当*str为'\0'时退出
    {
        if (*str == ch)
            count++;
        str++;        // 将指针移动到下一个字符
    }
    return count; 
}
