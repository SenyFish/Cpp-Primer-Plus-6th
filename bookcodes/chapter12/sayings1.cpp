// sayings1.cpp -- 使用扩展的String类
// 与string1.cpp一起编译
#include <iostream>
#include "string1.h" 
const int ArSize = 10;
const int MaxLen =81;
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    String name;
    cout <<"你好，你叫什么名字？\n>> ";
    cin >> name;

    cout << name << "，请输入最多 " << ArSize
         << " 条简短名言 <空行退出>：\n";
    String sayings[ArSize];     // 对象数组
    char temp[MaxLen];          // 临时字符串存储
    int i;
    for (i = 0; i < ArSize; i++)
    {
        cout << i+1 << ": ";
        cin.get(temp, MaxLen);
        while (cin && cin.get() != '\n')
            continue;
        if (!cin || temp[0] == '\0')    // 空行？
            break;              // i不递增
        else
            sayings[i] = temp;  // 重载的赋值运算符
    }
    int total = i;              // 读取的行数总计

    if ( total > 0)
    {
        cout << "以下是你的名言：\n";
        for (i = 0; i < total; i++)
            cout << sayings[i][0] << ": " << sayings[i] << endl;

        int shortest = 0;
        int first = 0;
        for (i = 1; i < total; i++)
        {
            if (sayings[i].length() < sayings[shortest].length())
                shortest = i;
            if (sayings[i] < sayings[first])
                first = i;
        }
        cout << "最短的名言：\n" << sayings[shortest] << endl;;
        cout << "字母序最靠前的名言：\n" << sayings[first] << endl;
        cout << "本程序使用了 "<< String::HowMany() 
             << " 个String对象。再见。\n";
    }
    else
        cout << "没有输入！再见。\n";
// 保持窗口打开 
/*    if (!cin)
        cin.clear();
    while (cin.get() != '\n')
        continue; */ 
   return 0; 
}
