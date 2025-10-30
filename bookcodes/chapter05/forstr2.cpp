// forstr2.cpp -- 反转数组
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    cout << "请输入一个单词：";
    string word;
    cin >> word;

    // 物理修改string对象
    char temp;
    int i, j;
    for (j = 0, i = word.size() - 1; j < i; --i, ++j)
    {                       // 块开始
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }                       // 块结束
    cout << word << "\n完成\n";
    // cin.get();
    // cin.get();
    return 0; 
}
