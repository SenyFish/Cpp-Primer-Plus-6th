// strgback.cpp -- 返回指向char指针的函数
#include <iostream>
char * buildstr(char c, int n);     // 原型
int main()
{
    using namespace std;
    int times;
    char ch;

    cout << "请输入一个字符：";
    cin >> ch;
    cout << "请输入一个整数：";
    cin >> times;
    char *ps = buildstr(ch, times);
    cout << ps << endl;
    delete [] ps;                   // 释放内存
    ps = buildstr('+', 20);         // 重用指针
    cout << ps << "-完成-" << ps << endl;
    delete [] ps;                   // 释放内存
    // cin.get();
    // cin.get();
    return 0;
}

// 构建由n个c字符组成的字符串
char * buildstr(char c, int n)
{
    char * pstr = new char [n + 1];
    pstr[n] = '\0';         // 终止字符串
    while (n-- > 0)
        pstr[n] = c;        // 填充字符串的其余部分
    return pstr; 
}
