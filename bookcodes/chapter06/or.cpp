// or.cpp -- 使用逻辑OR运算符
#include <iostream>
int main()
{
    using namespace std;
    cout << "本程序可能会重新格式化你的硬盘\n"
            "并销毁你所有的数据。\n"
            "你希望继续吗？<y/n> ";
    char ch;
    cin >> ch;
    if (ch == 'y' || ch == 'Y')             // y 或 Y
        cout << "已经警告过你了！\a\a\n";
    else if (ch == 'n' || ch == 'N')        // n 或 N
        cout << "明智的选择...再见\n";
    else
        cout << "那既不是y也不是n！显然你不会\n遵循指令，"
                "所以我还是会销毁你的硬盘。\a\a\a\n";
	// cin.get();
	// cin.get();
    return 0;
}
