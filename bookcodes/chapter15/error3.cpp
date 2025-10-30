// error3.cpp -- 使用异常
#include <iostream>
double hmean(double a, double b);

int main()
{
    double x, y, z;

    std::cout << "输入两个数字：";
    while (std::cin >> x >> y)
    {
        try {                   // try块开始
            z = hmean(x,y);
        }                       // try块结束
        catch (const char * s)  // 异常处理器开始
        {
            std::cout << s << std::endl;
            std::cout << "输入新的一对数字：";
            continue;
        }                       // 处理器结束
        std::cout << x << "和" << y << "的调和平均数"
            << "是" << z << std::endl;
        std::cout << "输入下一组数字<q退出>：";
    }
    std::cout << "再见！\n";
    return 0;
}

double hmean(double a, double b)
{
    if (a == -b)
        throw "错误的hmean()参数：不允许a = -b";
    return 2.0 * a * b / (a + b); 
}
