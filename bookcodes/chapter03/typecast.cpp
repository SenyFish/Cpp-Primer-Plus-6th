// typecast.cpp -- 强制类型转换
#include <iostream>
int main()
{
    using namespace std;
    int auks, bats, coots;

    // 下面的语句将值作为double相加，
    // 然后将结果转换为int
    auks = 19.99 + 11.99;

    // 这些语句将值作为int相加
    bats = (int) 19.99 + (int) 11.99;   // 旧的C语法
    coots = int (19.99) + int (11.99);  // 新的C++语法
    cout << "auks = " << auks << ", bats = " << bats;
    cout << ", coots = " << coots << endl;

    char ch = 'Z';
    cout << ch << " 的代码是 ";    // 作为char打印
    cout << int(ch) << endl;                    // 作为int打印
    cout << "是的，代码是 ";
    cout << static_cast<int>(ch) << endl;       // 使用static_cast
   // cin.get();
    return 0; 
}
