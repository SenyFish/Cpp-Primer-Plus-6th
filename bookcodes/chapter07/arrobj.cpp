//arrobj.cpp -- 带有数组对象的函数
#include <iostream>
#include <array>
#include <string>
const int Seasons = 4;
const std::array<std::string, Seasons> Snames =
    {"春季", "夏季", "秋季", "冬季"};

void fill(std::array<double, Seasons> * pa);
void show(std::array<double, Seasons> da);
int main()
{
    std::array<double, 4> expenses;
    fill(&expenses);
    show(expenses);
    // std::cin.get();
    // std::cin.get();
    return 0;
}

void fill(std::array<double, Seasons> * pa)
{
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << "请输入" << Snames[i] << "的开支：";
        std::cin >> (*pa)[i];
    }
}

void show(std::array<double, Seasons> da)
{
    double total = 0.0;
    std::cout << "\n开支\n";
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << Snames[i] << "：$" << da[i] << '\n';
        total += da[i];
    }
    std::cout << "总计：$" << total << '\n';
}
