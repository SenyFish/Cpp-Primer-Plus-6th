// stonewt.cpp -- Stonewt方法
#include <iostream>
using std::cout;
#include "stonewt.h"

// 从double值构造Stonewt对象
Stonewt::Stonewt(double lbs)
{
    stone = int (lbs) / Lbs_per_stn;    // 整数除法
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}

// 从英石和double值构造Stonewt对象
Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds =  stn * Lbs_per_stn +lbs;
}

Stonewt::Stonewt()          // 默认构造函数，wt = 0
{
    stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()         // 析构函数
{
}

// 以英石显示重量
void Stonewt::show_stn() const
{
    cout << stone << "英石，" << pds_left << "磅\n";
}

// 以磅显示重量
void Stonewt::show_lbs() const
{
    cout << pounds << "磅\n";
}
