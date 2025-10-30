// Create by Shujia Huang on 2021-07-25
#include <iostream>
#include <string>

int main() {
    using namespace std;

    string name;
    string dessert;

    cout << "请输入你的名字：\n";
    getline(cin, name);

    cout << "请输入你最喜欢的甜点：\n";
    getline(cin, dessert);

    cout << "我有美味的" << dessert;
    cout << "给你，" << name << "。\n";

    return 0;
}