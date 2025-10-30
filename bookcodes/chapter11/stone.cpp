// stone.cpp -- 用户定义的转换
// 与stonewt.cpp一起编译
#include <iostream>
using std::cout;
#include "stonewt.h"
void display(const Stonewt & st, int n);
int main()
{
    Stonewt incognito = 275; // 使用构造函数初始化
    Stonewt wolfe(285.7);    // 与Stonewt wolfe = 285.7相同;
    Stonewt taft(21, 8);

    cout << "名人体重";
    incognito.show_stn();
    cout << "侦探体重";
    wolfe.show_stn();
    cout << "总统体重";
    taft.show_lbs();
    incognito = 276.8;      // 使用构造函数进行转换
    taft = 325;             // 与taft = Stonewt(325)相同;
    cout << "晚餐后，名人体重";
    incognito.show_stn();
    cout << "晚餐后，总统体重";
    taft.show_lbs();
    display(taft, 2);
    cout << "摔跤手体重更重。\n";
    display(422, 2);
    cout << "没有遗漏任何石头\n";
    // std::cin.get();
    return 0;
}

void display(const Stonewt & st, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "哇！";
        st.show_stn();
    }
}
