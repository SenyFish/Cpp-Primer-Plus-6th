//error2.cpp -- 返回错误代码
#include <iostream>
#include <cfloat>  // (or float.h) for DBL_MAX

bool hmean(double a, double b, double * ans);

int main()
{
    double x, y, z;

    std::cout << "输入两个数字：";
    while (std::cin >> x >> y)
    {
        if (hmean(x,y,&z))
            std::cout << x << "和" << y << "的调和平均数"
                << "是" << z << std::endl;
        else
            std::cout << "一个值不应该是另一个的负数"
                << " - 请重试。\n";
        std::cout << "输入下一组数字<q退出>：";
    }
    std::cout << "再见！\n";
    return 0;
}

bool hmean(double a, double b, double * ans)
{
    if (a == -b)
    {
        *ans = DBL_MAX;
        return false;
    }
    else
    {
        *ans = 2.0 * a * b / (a + b);
        return true;
    }
}
