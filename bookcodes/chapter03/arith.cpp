// arith.cpp -- 一些C++算术运算
#include <iostream>
int main()
{
    using namespace std;
    float hats, heads;
    //double hats, heads;

    cout.setf(ios_base::fixed, ios_base::floatfield); // 定点表示
    cout << "请输入一个数字：";
    cin >> hats;
    cout << "请输入另一个数字：";
    cin >> heads;

    cout << "hats = " << hats << "; heads = " << heads << endl;
    cout << "hats + heads = " << hats + heads << endl;
    cout << "hats - heads = " << hats - heads << endl;
    cout << "hats * heads = " << hats * heads << endl;
    cout << "hats / heads = " << hats / heads << endl;
    // cin.get();
    // cin.get();
    return 0;
}
