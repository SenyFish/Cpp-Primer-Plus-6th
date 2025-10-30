//use_tvfm.cpp -- 使用Tv和Remote类
#include <iostream>
#include "tvfm.h"

int main()
{
    using std::cout;
    Tv s42;
    cout << "42\"电视的初始设置：\n";
    s42.settings();
    s42.onoff();
    s42.chanup();
    cout << "\n42\"电视调整后的设置：\n";
    s42.settings();

    Remote grey;

    grey.set_chan(s42, 10);
    grey.volup(s42);
    grey.volup(s42);
    cout << "\n使用遥控器后42\"的设置：\n";
    s42.settings();

    Tv s58(Tv::On);
    s58.set_mode();
    grey.set_chan(s58,28);
    cout << "\n58\"设置：\n";
    s58.settings();
    // std::cin.get();
    return 0; 
}
