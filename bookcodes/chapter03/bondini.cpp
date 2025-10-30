// bondini.cpp -- 使用转义序列
#include <iostream>
int main()
{
    using namespace std;
    cout << "\a行动代号\"超级炒作\"现已启动！\n";
    cout << "请输入你的特工代码：________\b\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "\a你输入了 " << code << "...\n";
    cout << "\a代码已验证！执行Z3计划！\n";
    // cin.get();
    // cin.get();
    return 0; 
}
