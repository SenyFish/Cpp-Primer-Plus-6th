//strc_ref.cpp -- 使用结构引用
#include <iostream>
#include <string>
struct free_throws
{
    std::string name;
    int made;
    int attempts;
    float percent;
};

void display(const free_throws & ft);
void set_pc(free_throws & ft);
free_throws & accumulate(free_throws &target, const free_throws &source);

int main()
{
    free_throws one = {"Ifelsa Branch", 13, 14};
    free_throws two = {"Andor Knott", 10, 16};
    free_throws three = {"Minnie Max", 7, 9};
    free_throws four = {"Whily Looper", 5, 9};
    free_throws five = {"Long Long", 6, 14};
    free_throws team = {"Throwgoods", 0, 0};
    free_throws dup;
    set_pc(one);
    display(one);
    accumulate(team, one);
    display(team);
// use return value as argument
    display(accumulate(team, two));
    accumulate(accumulate(team, three), four);
    display(team);
// 在赋值中使用返回值
    dup = accumulate(team,five);
    std::cout << "显示team：\n";
    display(team);
    std::cout << "赋值后显示dup：\n";
    display(dup);
    set_pc(four);
// 不明智的赋值
    accumulate(dup,five) = four;
    std::cout << "不明智的赋值后显示dup：\n";
    display(dup);
    // std::cin.get();
    return 0;
}

void display(const free_throws & ft)
{
    using std::cout;
    cout << "姓名：" << ft.name << '\n';
    cout << "  命中：" << ft.made << '\t';
    cout << "尝试：" << ft.attempts << '\t';
    cout << "百分比：" << ft.percent << '\n';
}
void set_pc(free_throws & ft)
{
    if (ft.attempts != 0)
        ft.percent = 100.0f *float(ft.made)/float(ft.attempts);
    else
        ft.percent = 0;
}

free_throws & accumulate(free_throws & target, const free_throws & source)
{
    target.attempts += source.attempts;
    target.made += source.made;
    set_pc(target);
    return target;
}