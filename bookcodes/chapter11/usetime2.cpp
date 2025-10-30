// usetime2.cpp -- 使用Time类的第三个草稿
// 将usetime2.cpp和mytime2.cpp一起编译
#include <iostream>
#include "mytime2.h"

int main()
{
    using std::cout;
    using std::endl;
    Time weeding(4, 35);
    Time waxing(2, 47);
    Time total;
    Time diff;
    Time adjusted;

    cout << "除草时间 = ";
    weeding.Show();
    cout << endl;
 
    cout << "打蜡时间 = ";
    waxing.Show();
    cout << endl;
    
    cout << "总工作时间 = ";
    total = weeding + waxing;   // 使用operator+()
    total.Show();
    cout << endl;

    diff = weeding - waxing;    // 使用operator-()
    cout << "除草时间 - 打蜡时间 = ";
    diff.Show();
    cout << endl;

    adjusted = total * 1.5;      // 使用operator+()
    cout << "调整后的工作时间 = ";
    adjusted.Show();
    cout << endl;
    // std::cin.get();    
    return 0;
}
