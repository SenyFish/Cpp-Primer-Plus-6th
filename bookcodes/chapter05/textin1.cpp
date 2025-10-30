// textin1.cpp -- 使用while循环读取字符
#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count = 0;      // 使用基本输入
    cout << "请输入字符；输入#退出：\n";
    cin >> ch;          // 获取一个字符
    while (ch != '#')   // 测试字符
    {
        cout << ch;     // 回显字符
        ++count;        // 计数字符
        cin >> ch;      // 获取下一个字符
    }
    cout << endl << count << " 个字符被读取\n";
// 清除行的其余部分
     // while (cin.get() != '\n')
        // ;
//cin.get();
    return 0; 
}
