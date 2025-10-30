// instr2.cpp -- 使用getline读取多个单词
#include <iostream>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "请输入你的名字：\n";
    cin.getline(name, ArSize);  // 读取到换行符为止
    cout << "请输入你最喜欢的甜点：\n";
    cin.getline(dessert, ArSize);
    cout << "我有一些美味的" << dessert;
    cout << "给你，" << name << "。\n";
    // cin.get();
    return 0; 
}
