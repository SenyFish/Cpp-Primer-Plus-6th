// condit.cpp -- 使用条件运算符
#include <iostream>
int main()
{
    using namespace std;
    int a, b;
    cout << "请输入两个整数：";
    cin >> a >> b;
    cout << a << "和" << b << "中较大的数";
    int c = a > b ? a : b;   // 如果a > b，则c = a，否则c = b
    cout << "是" << c << endl;
    // cin.get();
    // cin.get();
	return 0; 
}
