// ourfunc.cpp -- 定义你自己的函数
#include <iostream>
void simon(int);    // simon() 的函数原型

int main()
{
    using namespace std;
    simon(3);       // 调用 simon() 函数
    cout << "请输入一个整数：";
    int count;
    cin >> count;
    simon(count);   // 再次调用
    cout << "完成！" << endl;
	// cin.get();
    // cin.get();
    return 0;
}

void simon(int n)   // 定义simon()函数
{
    using namespace std;

    cout << "西蒙说请弯腰触摸你的脚趾 " << n << " 次。" << endl;
}                   // void类型函数不需要返回值
