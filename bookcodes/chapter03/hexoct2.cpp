// hexoct2.cpp -- 以十六进制和八进制显示值
#include <iostream>
using namespace std;
int main()
{
    using namespace std;
    int chest = 42;
    int waist = 42; 
    int inseam = 42;

    cout << "先生身材很好！"  << endl;
    cout << "胸围 = " << chest << "（42的十进制）" << endl;
    cout << hex;      // 改变数字基数的操纵符
    cout << "腰围 = " << waist << "（42的十六进制）" << endl;
    cout << oct;      // 改变数字基数的操纵符
    cout << "内缝 = " << inseam << "（42的八进制）" << endl;
    // cin.get();
    return 0; 
}
