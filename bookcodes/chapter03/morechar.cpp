// morechar.cpp -- char类型和int类型的对比
#include <iostream>
int main()
{
    using namespace std;
    char ch = 'M';       // 将M的ASCII码赋给ch
    int i = ch;          // 在int中存储相同的代码
    cout << ch << " 的ASCII码是 " << i << endl;

    cout << "给字符码加1：" << endl;
    ch = ch + 1;          // 改变ch中的字符码
    i = ch;               // 在i中保存新的字符码
    cout << ch << " 的ASCII码是 " << i << endl;

    // 使用cout.put()成员函数显示一个字符
    cout << "使用cout.put(ch)显示字符ch：";
    cout.put(ch);

    // 使用cout.put()显示一个字符常量
    cout.put('!');

    cout << endl << "完成" << endl;
	// cin.get();
    return 0;
}
