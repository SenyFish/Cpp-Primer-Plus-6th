// limits.cpp -- 一些整数限制
#include <iostream>
#include <climits>              // 旧系统使用limits.h
int main()
{
    using namespace std;
    int n_int = INT_MAX;        // 将n_int初始化为int最大值
    short n_short = SHRT_MAX;   // climits文件中定义的符号
    long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

    // sizeof运算符产生类型或变量的大小
    cout << "int占 " << sizeof (int) << " 字节。" << endl;
    cout << "short占 " << sizeof n_short << " 字节。" << endl;
    cout << "long占 " << sizeof n_long << " 字节。" << endl;
    cout << "long long占 " << sizeof n_llong << " 字节。" << endl;
    cout << endl;

    cout << "最大值：" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl << endl;

    cout << "int最小值 = " << INT_MIN << endl;
    cout << "每字节比特数 = " << CHAR_BIT << endl;
	// cin.get();
    return 0;
}
