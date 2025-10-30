// stock1.cpp – ?????????????Stock???
#include <iostream>
#include "stock10.h"

// ??????????
Stock::Stock()        // ??????
{
    std::cout << "????????\n";
    company = "???";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const std::string & co, long n, double pr)
{
    std::cout << "??" << co << "??????\n";
    company = co;

    if (n < 0)
    {
        std::cout << "?????????"
                   << company << "???????0?\n";
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}
// ?????
Stock::~Stock()        // ????????
{
    std::cout << "???" << company << "?\n";
}

// ????
void Stock::buy(long num, double price)
{
     if (num < 0)
    {
        std::cout << "????????????"
             << "??????\n";
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
        cout << "????????????"
             << "??????\n";
    }
    else if (num > shares)
    {
        cout << "??????????????"
             << "??????\n";
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
    // ?????#.###
    ios_base::fmtflags orig = 
        cout.setf(ios_base::fixed, ios_base::floatfield); 
    std::streamsize prec = cout.precision(3);

    cout << "???" << company
        << "  ???" << shares << '\n';
    cout << "  ???$" << share_val;
    // ?????#.##
    cout.precision(2);
    cout << "  ????$" << total_val << '\n';

    // ??????
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}
