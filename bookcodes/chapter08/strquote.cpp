// strquote.cpp  -- 不同的设计
#include <iostream>
#include <string>
using namespace std;
string version1(const string & s1, const string & s2);
const string & version2(string & s1, const string & s2);  // 有副作用
const string & version3(string & s1, const string & s2);  // 糟糕的设计
 
int main()
{
    string input;
    string copy;
    string result;

    cout << "请输入一个字符串：";
    getline(cin, input);
    copy = input;
    cout << "你输入的字符串：" << input << endl;
    result = version1(input, "***");
    cout << "增强后的字符串：" << result << endl;
    cout << "原始字符串：" << input << endl;
 
    result = version2(input, "###");
    cout << "增强后的字符串：" << result << endl;
    cout << "原始字符串：" << input << endl;

    cout << "重置原始字符串。\n";
    input = copy;
    result = version3(input, "@@@");
    cout << "增强后的字符串：" << result << endl;
    cout << "原始字符串：" << input << endl;
	// cin.get();
	// cin.get();
    return 0;
}

string version1(const string & s1, const string & s2)
{
    string temp;

    temp = s2 + s1 + s2;
    return temp;
}

const string & version2(string & s1, const string & s2)   // 有副作用
{
    s1 = s2 + s1 + s2;
// 安全地返回传递给函数的引用
    return s1; 
}

const string & version3(string & s1, const string & s2)   // 糟糕的设计
{
    string temp;

    temp = s2 + s1 + s2;
// 不安全地返回局部变量的引用
    return temp;
}
