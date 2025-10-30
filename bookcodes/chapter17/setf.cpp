// setf.cpp -- 使用setf()控制格式化
#include <iostream>

int main()
{
    using std::cout;
    using std::endl;
    using std::ios_base;

    int temperature = 63;

    cout << "今天的水温：";
    cout.setf(ios_base::showpos);    // 显示加号
    cout << temperature << endl;

    cout << "对于我们的编程朋友，那是\n";
    cout << std::hex << temperature << endl; // 使用十六进制
    cout.setf(ios_base::uppercase);  // 在十六进制中使用大写
    cout.setf(ios_base::showbase);   // 为十六进制使用0X前缀
    cout << "或\n";
    cout << temperature << endl;
    cout << "多么" << true << "！哎呀 -- 多么";
    cout.setf(ios_base::boolalpha);
    cout << true << "！\n";
	// std::cin.get();
    return 0; 
}
