// file1.cpp -- 三文件程序示例
#include <iostream>
#include "coordin.h" // 结构模板，函数原型
using namespace std;
int main()
{
    rect rplace;
    polar pplace;

    cout << "请输入x和y值：";
    while (cin >> rplace.x >> rplace.y)  // 巧妙使用cin
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "下两个数字（输入q退出）：";
    }
    cout << "再见！\n";
// keep window open in MSVC++
/*
    cin.clear();
    while (cin.get() != '\n')
        continue;
    cin.get();
*/
    return 0; 
}
