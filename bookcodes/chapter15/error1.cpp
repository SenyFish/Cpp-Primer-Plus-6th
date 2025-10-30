//error1.cpp -- 使用abort()函数
#include <iostream>
#include <cstdlib>
double hmean(double a, double b);

int main()
{
    double x, y, z;

    std::cout << "输入两个数字：";
    while (std::cin >> x >> y)
    {
        z = hmean(x,y);
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
    {
        std::cout << "hmean()的参数不合理\n";
        std::abort();
    }
    return 2.0 * a * b / (a + b); 
}
