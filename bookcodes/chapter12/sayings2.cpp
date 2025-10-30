// sayings2.cpp -- using pointers to objects
// compile with string1.cpp
#include <iostream>
#include <cstdlib>      // (or stdlib.h) for rand(), srand()
#include <ctime>        // (or time.h) for time()
#include "string1.h"
const int ArSize = 10;
const int MaxLen = 81;
int main()
{
    using namespace std;
    String name;
    cout <<"Hi, what's your name?\n>> ";
    cin >> name;

    cout << name << ", please enter up to " << ArSize
         << " short sayings <empty line to quit>:\n";
    String sayings[ArSize];
    char temp[MaxLen];               // temporary string storage
    int i;
    for (i = 0; i < ArSize; i++)
    {
        cout << i+1 << ": ";
        cin.get(temp, MaxLen);
        while (cin && cin.get() != '\n')
            continue;
        if (!cin || temp[0] == '\0') // empty line?
            break;                   // i not incremented
        else
            sayings[i] = temp;       // overloaded assignment
    }
    int total = i;                   // 读取的行数总计

    if (total > 0)
    {
        cout << "以下是你的名言：\n";
        for (i = 0; i < total; i++)
            cout << sayings[i] << "\n";

    // 使用指针追踪最短和首字母最先的字符串
        String * shortest = &sayings[0]; // 初始化为第一个对象
        String * first = &sayings[0];
        for (i = 1; i < total; i++)
        {
            if (sayings[i].length() < shortest->length())
                shortest = &sayings[i];
            if (sayings[i] < *first)     // 比较数值
                first = &sayings[i];     // 赋值地址
        }
        cout << "最短的名言：\n" << * shortest << endl;
        cout << "字母序最靠前的名言：\n" << * first << endl;

        srand(time(0));
        int choice = rand() % total; // 随机选择索引
    // 使用new创建并初始化一个新的String对象
        String * favorite = new String(sayings[choice]);
        cout << "我最喜欢的名言：\n" << *favorite << endl;
        delete favorite;
    }
    else
        cout << "没有可显示的内容。\n";
    cout << "再见。\n";
// 保持窗口打开
/*    if (!cin)
        cin.clear();
    while (cin.get() != '\n')
        continue;
    cin.get();
*/
    return 0; 
}
