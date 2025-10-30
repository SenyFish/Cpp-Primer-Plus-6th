// compstr2.cpp -- 使用string类比较字符串
#include <iostream>
#include <string>     // string类
int main()
{
    using namespace std;
    string word = "?ate";

    for (char ch = 'a'; word != "mate"; ch++)
    {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "循环结束后，word是 " << word << endl;
    // cin.get();
    return 0; 
}
