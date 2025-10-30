// stock01.cpp -- 修订的show()方法
#include <iostream>
#include "stock00.h"

void Stock::acquire(const std::string & co, long n, double pr)
{
    company = co;
    if (n < 0)
    {
        std::cerr << "股票数量不能为负；"
                  << company << "的股票数设置为0。\n";
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}

void Stock::buy(long num, double price)
{
     if (num < 0)
    {
        std::cerr << "购买的股票数量不能为负。"
             << "交易已中止。\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price)
{
    using std::cerr;
    if (num < 0)
    {
        cerr << "出售的股票数量不能为负。"
             << "交易已中止。\n";
    }
    else if (num > shares)
    {
        cerr << "你不能出售超过你拥有的数量！"
             << "交易已中止。\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock::show()
{
    using std::cout;
    using std::ios_base;
    // 设置格式为#.###
    ios_base::fmtflags orig = cout.setf(ios_base::fixed); 
    int prec = cout.precision(3);

    cout << "公司：" << company
        << "  股票：" << shares << '\n';
    cout << "  股价：$" << share_val;
    // 设置格式为*.**
    cout.precision(2);
    cout << "  总价值：$" << total_val << '\n';

    // 恢复原始格式
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}
