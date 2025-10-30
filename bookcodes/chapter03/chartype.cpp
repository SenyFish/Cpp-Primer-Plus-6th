// chartype.cpp -- char类型
#include <iostream>
int main( )
{
    using namespace std;
    char ch;        // 声明一个char变量

    cout << "请输入一个字符：" << endl;
    cin >> ch;
    cout << "你好！";
    cout << "感谢你输入字符 " << ch << "。" << endl;
    // cin.get();
    // cin.get();
    return 0;
}
