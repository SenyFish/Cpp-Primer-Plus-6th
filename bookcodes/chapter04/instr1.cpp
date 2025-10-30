// instr1.cpp -- 读取多个字符串
#include <iostream>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "请输入你的名字：\n";
    cin >> name;
    cout << "请输入你最喜欢的甜点：\n";
    cin >> dessert;
    cout << "我有一些美味的" << dessert;
    cout << "给你，" << name << "。\n";
    // cin.get();
	// cin.get();
    return 0; 
}
