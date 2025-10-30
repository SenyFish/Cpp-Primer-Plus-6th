// tv.cpp -- Tv类的方法（Remote方法是内联的）
#include <iostream>
#include "tv.h"

bool Tv::volup()
{
    if (volume < MaxVal)
    {
        volume++;
        return true;
    }
    else
        return false;
}
bool Tv::voldown()
{
    if (volume > MinVal)
    {
        volume--;
        return true;
    }
    else
        return false;
}

void Tv::chanup()
{
    if (channel < maxchannel)
        channel++;
    else
        channel = 1;
}

void Tv::chandown()
{
    if (channel > 1)
        channel--;
    else
        channel = maxchannel;
}

void Tv::settings() const
{
    using std::cout;
    using std::endl;
    cout << "电视是" << (state == Off? "关" : "开") << endl;
    if (state == On)
    {
        cout << "音量设置 = " << volume << endl;
        cout << "频道设置 = " << channel << endl;
        cout << "模式 = "
            << (mode == Antenna? "天线" : "有线") << endl;
        cout << "输入 = "
            << (input == TV? "TV" : "DVD") << endl;
    }
}
