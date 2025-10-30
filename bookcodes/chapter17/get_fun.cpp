// get_fun.cpp -- 使用get()和getline()
#include <iostream>
const int Limit = 255;

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    char input[Limit];

    cout << "输入字符串供getline()处理：\n";
    cin.getline(input, Limit, '#');
    cout << "这是您的输入：\n";
    cout << input << "\n阶段1完成\n";

    char ch;
    cin.get(ch);
    cout << "下一个输入字符是" << ch << endl;

    if (ch != '\n')
        cin.ignore(Limit, '\n');    // 丢弃行的其余部分

    cout << "输入字符串供get()处理：\n";
    cin.get(input, Limit, '#');
    cout << "这是您的输入：\n";
    cout << input << "\n阶段2完成\n";

    cin.get(ch);
    cout << "下一个输入字符是" << ch << endl;
/* keeping output window open */
/*
    cin.clear();
    while (cin.get() != '\n')
        continue;
    cin.get();
*/
    return 0; 
}
