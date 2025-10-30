// firstref.cpp -- 定义和使用引用
#include <iostream>
int main()
{
    using namespace std;
    int rats = 101;
    int & rodents = rats;   // rodents是一个引用

    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;
    rodents++;
    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;

// 某些实现需要将以下地址
// 类型转换为unsigned类型
    cout << "rats的地址 = " << &rats;
    cout << ", rodents的地址 = " << &rodents << endl;
    // cin.get();
    return 0; 
}
