//usealgo.cpp -- 使用多个STL元素
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <iterator>
#include <algorithm>
#include <cctype>
using namespace std;

char toLower(char ch) { return tolower(ch); }
string & ToLower(string & st);
void display(const string & s);

int main()
{
    vector<string> words;
    cout << "输入单词（输入quit退出）：\n";
    string input;
    while (cin >> input && input != "quit")
        words.push_back(input);

    cout << "您输入了以下单词：\n";
    for_each(words.begin(), words.end(), display);
    cout << endl;

    // 将单词放入集合，转换为小写
    set<string> wordset;
    transform(words.begin(), words.end(),
        insert_iterator<set<string> > (wordset, wordset.begin()),
        ToLower);
    cout << "\n单词的字母顺序列表：\n";
    for_each(wordset.begin(), wordset.end(), display);
    cout << endl;

    // 将单词和频率放入映射
    map<string, int> wordmap;
    set<string>::iterator si;
    for (si = wordset.begin(); si != wordset.end(); si++)
        wordmap[*si] = count(words.begin(), words.end(), *si);

    // 显示映射内容
    cout << "\n单词频率：\n";
    for (si = wordset.begin(); si != wordset.end(); si++)
        cout << *si << "：" << wordmap[*si] << endl;
    // cin.get();
    // cin.get();
    return 0;
}

string & ToLower(string & st)
{
    transform(st.begin(), st.end(), st.begin(), toLower);
    return st; 
}

void display(const string & s)
{
    cout << s << " ";
}
