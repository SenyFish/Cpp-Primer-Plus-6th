// strtype4.cpp -- 行输入
#include <iostream>
#include <string>               // 使string类可用
#include <cstring>              // C风格字符串库
int main()
{
    using namespace std;
    char charr[20]; 
    string str;

    cout << "输入前charr中字符串的长度：" 
         << strlen(charr) << endl;
    cout << "输入前str中字符串的长度："
         << str.size() << endl;
    cout << "请输入一行文本：\n";
    cin.getline(charr, 20);     // 指定最大长度
    cout << "你输入了：" << charr << endl;
    cout << "请输入另一行文本：\n";
    getline(cin, str);          // cin现在是参数；无长度说明符
    cout << "你输入了：" << str << endl;
    cout << "输入后charr中字符串的长度：" 
         << strlen(charr) << endl;
    cout << "输入后str中字符串的长度："
         << str.size() << endl;
    // cin.get();

    return 0; 
}
