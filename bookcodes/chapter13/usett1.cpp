// usett1.cpp -- 使用基类和派生类
#include <iostream>
#include "tabtenn1.h"

int main ( void )
{
    using std::cout;
    using std::endl;
    TableTennisPlayer player1("Tara", "Boomdea", false);
    RatedPlayer rplayer1(1140, "Mallory", "Duck", true);
    rplayer1.Name();          // 派生对象使用基类方法
    if (rplayer1.HasTable())
        cout << "：有球桌。\n";
    else
        cout << "：没有球桌。\n";
    player1.Name();           // 基类对象使用基类方法
    if (player1.HasTable())
        cout << "：有球桌";
    else
        cout << "：没有球桌。\n";
    cout << "姓名：";
    rplayer1.Name();
    cout << "；评级：" << rplayer1.Rating() << endl;
// 使用TableTennisPlayer对象初始化RatedPlayer
    RatedPlayer rplayer2(1212, player1);
    cout << "姓名：";
    rplayer2.Name();
    cout << "；评级：" << rplayer2.Rating() << endl;
    // std::cin.get();
    return 0;
}
