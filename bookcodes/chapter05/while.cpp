// while.cpp -- 介绍while循环
#include <iostream>
const int ArSize = 20;
int main()
{
    using namespace std;
    char name[ArSize];

    cout << "请输入你的名字：";
    cin >> name;
    cout << "这是你的名字，垂直显示并转为ASCII码：\n";
    int i = 0;                  // 从字符串开头开始
    while (name[i] != '\0')     // 处理到字符串末尾
    {
        cout << name[i] << ": " << int(name[i]) << endl;
        i++;                    // 不要忘记这一步
    }
    // cin.get();
    // cin.get();
    return 0; 
}
