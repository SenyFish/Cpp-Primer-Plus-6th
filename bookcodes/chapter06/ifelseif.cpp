// ifelseif.cpp -- 使用if else if else
#include <iostream>
const int Fave = 27;
int main()
{
    using namespace std;
    int n;

    cout << "输入一个1-100之间的数字来找出";
    cout << "我最喜欢的数字：";
    do
    {
        cin >> n;
        if (n < Fave)
            cout << "太低了 -- 再猜一次：";
        else if (n > Fave)
            cout << "太高了 -- 再猜一次：";
        else
            cout << Fave << "是正确的！\n";
    } while (n != Fave);
    // cin.get();
    // cin.get();
    return 0;
}