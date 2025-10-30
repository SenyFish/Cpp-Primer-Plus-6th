// hexoct1.cpp -- 显示十六进制和八进制字面值
#include <iostream>
int main()
{
    using namespace std;
    int chest = 42;     // 十进制整数字面值
    int waist = 0x42;   // 十六进制整数字面值
    int inseam = 042;   // 八进制整数字面值

    cout << "先生身材很好！\n";
    cout << "胸围 = " << chest << "（十进制42）\n";
    cout << "腰围 = " << waist << "（十六进制0x42）\n";
    cout << "内缝 = " << inseam << "（八进制042）\n";
	// cin.get();
    return 0; 
}
