// secref.cpp -- 定义和使用引用
#include <iostream>
int main()
{
    using namespace std;
    int rats = 101;
    int & rodents = rats;   // rodents是一个引用

    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;

    cout << "rats的地址 = " << &rats;
    cout << ", rodents的地址 = " << &rodents << endl;

    int bunnies = 50;
    rodents = bunnies;       // 我们能改变引用吗？
    cout << "bunnies = " << bunnies;
    cout << ", rats = " << rats;
    cout << ", rodents = " << rodents << endl;

    cout << "bunnies的地址 = " << &bunnies;
    cout << ", rodents的地址 = " << &rodents << endl;
    // cin.get();
    return 0; 
}
