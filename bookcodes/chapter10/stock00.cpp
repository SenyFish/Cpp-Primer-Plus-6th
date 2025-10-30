// stock00.cpp -- 实现Stock类
// 版本00
#include <iostream>
#include "stock00.h"

void Stock::acquire(const std::string & co, long n, double pr)
{
    company = co;
    if (n < 0)
    {
        std::cout << "股票数量不能为负；"
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
        std::cout << "购买的股票数量不能为负。"
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
    using std::cout;
    if (num < 0)
    {
        cout << "出售的股票数量不能为负。"
             << "交易已中止。\n";
    }
    else if (num > shares)
    {
        cout << "你不能出售超过你拥有的数量！"
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
    std::cout << "公司：" << company
              << "  股票：" << shares << '\n'
              << "  股价：$" << share_val
              << "  总价值：$" << total_val << '\n';
}
