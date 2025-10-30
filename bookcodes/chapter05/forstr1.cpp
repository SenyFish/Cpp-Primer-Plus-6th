// forstr1.cpp -- 对字符串使用for
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    cout << "请输入一个单词：";
    string word;
    cin >> word;

    // 以相反顺序显示字母
    for (int i = word.size() - 1; i >= 0; i--)
        cout << word[i];
    cout << "\n再见。\n";
    // cin.get();
    // cin.get();
    return 0; 
}
