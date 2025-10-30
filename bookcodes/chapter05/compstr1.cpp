// compstr1.cpp -- 使用数组比较字符串
#include <iostream>
#include <cstring>     // strcmp()的原型
int main()
{
    using namespace std;
    char word[5] = "?ate";

    for (char ch = 'a'; strcmp(word, "mate"); ch++)
    {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "循环结束后，word是 " << word << endl;
    // cin.get();
    return 0; 
}
