// modulus.cpp -- 使用%运算符将磅转换为英石
#include <iostream>
int main()
{
    using namespace std;
    const int Lbs_per_stn = 14;
    int lbs;

    cout << "请输入你的体重（磅）：";
    cin >> lbs;
    int stone = lbs / Lbs_per_stn;      // 整英石
    int pounds = lbs % Lbs_per_stn;     // 余数磅数
    cout << lbs << " 磅等于 " << stone
         << " 英石，" << pounds << " 磅。\n";
    // cin.get();
    // cin.get();
    return 0; 
}
