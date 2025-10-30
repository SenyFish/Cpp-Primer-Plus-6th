// lotto.cpp -- 获胜概率
#include <iostream>
// 注意：某些实现需要使用double而不是long double
long double probability(unsigned numbers, unsigned picks);
int main()
{
    using namespace std;
    double total, choices;
    cout << "请输入游戏卡上的总选项数和\n"
            "允许的选择数：\n";
    while ((cin >> total >> choices) && choices <= total)
    {
        cout << "你有";
        cout << probability(total, choices);      // 计算概率
        cout << "分之一的获胜机会。\n";
        cout << "下两个数字（输入q退出）：";
    }
    cout << "再见\n";
    // cin.get();
    // cin.get();
    return 0;
}

// 以下函数计算从numbers个选项中正确选择picks个
// 数字的概率
long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;  // 这里是一些局部变量
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p ; 
    return result;
}
