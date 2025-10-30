// if.cpp -- 使用if语句
#include <iostream>
int main()
{
    using std::cin;     // using声明
	using std::cout;
    char ch;
    int spaces = 0;
    int total = 0;
    cin.get(ch);
    while (ch != '.')   // 在句子结尾退出
    {
        if (ch == ' ')  // 检查ch是否为空格
            ++spaces;
        ++total;        // 每次都执行
        cin.get(ch);
    }
    cout << spaces << "个空格，" << total;
    cout << "个字符，句子总计\n";
    // cin.get();
    // cin.get();
    return 0;
}
