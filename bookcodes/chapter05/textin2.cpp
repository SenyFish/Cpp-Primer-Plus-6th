// textin2.cpp -- 使用cin.get(char)
#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count = 0;

    cout << "请输入字符；输入#退出：\n";
    cin.get(ch);        // 使用cin.get(ch)函数
    while (ch != '#')
    {
        cout << ch;
        ++count;
        cin.get(ch);    // 再次使用它
    }
    cout << endl << count << " 个字符被读取\n";
// 清除行的其余部分
    // while (cin.get() != '\n')
    //    ;
    //cin.get();
    return 0; 
}
