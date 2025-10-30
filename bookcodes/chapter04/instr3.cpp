// instr3.cpp -- 使用get()和get()读取多个单词
#include <iostream>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "请输入你的名字：\n";
    cin.get(name, ArSize).get();    // 读取字符串和换行符
    cout << "请输入你最喜欢的甜点：\n";
    cin.get(dessert, ArSize).get();
    cout << "我有一些美味的" << dessert;
    cout << "给你，" << name << "。\n";
    // cin.get();
    return 0; 
}
