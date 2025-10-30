// num_test.cpp -- 在for循环中使用数值测试
#include <iostream>
int main()
{
    using namespace std;
    cout << "请输入倒计时起始值：";
    int limit;
    cin >> limit;
    int i;
    for (i = limit; i; i--)     // 当i为0时退出
        cout << "i = " << i << "\n";
    cout << "完成，现在i = " << i << "\n";
    // cin.get();
    // cin.get();
    return 0;
}
