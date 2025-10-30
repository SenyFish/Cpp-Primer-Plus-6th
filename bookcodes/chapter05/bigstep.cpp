// bigstep.cpp -- 按指定方式计数
#include <iostream>
int main()
{
	using std::cout;    // using声明
    using std::cin;
    using std::endl;;
    cout << "请输入一个整数：";
    int by;
    cin >> by;
    cout << "以" << by << "为步长计数：\n";
    for (int i = 0; i < 100; i = i + by)
        cout << i << endl;
    // cin.get();
    // cin.get();
    return 0;
}
