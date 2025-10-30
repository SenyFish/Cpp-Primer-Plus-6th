// twofile2.cpp -- 具有内部和外部链接的变量
#include <iostream>
extern int tom;         // tom在其他地方定义
static int dick = 10;   // 覆盖外部dick
int harry = 200;        // 外部变量定义，
                        // 与twofile1的harry没有冲突

void remote_access()
{
    using namespace std;
		
    cout << "remote_access()报告以下地址：\n";
    cout << &tom << " = &tom, " << &dick << " = &dick, ";
    cout << &harry << " = &harry\n";
}
