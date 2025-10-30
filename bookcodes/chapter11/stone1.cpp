// stone1.cpp -- 用户定义的转换函数
// 与stonewt1.cpp一起编译
#include <iostream>
#include "stonewt1.h"

int main()
{
    using std::cout;
    Stonewt poppins(9,2.8);     // 9英石，2.8磅
    double p_wt = poppins;      // 隐式转换
    cout << "转换为double => ";
    cout << "Poppins：" << p_wt << "磅。\n";
    cout << "转换为int => ";
    cout << "Poppins：" << int (poppins) << "磅。\n";
	// std::cin.get();
    return 0; 
}
