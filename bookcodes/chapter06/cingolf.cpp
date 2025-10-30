// cingolf.cpp -- 跳过非数字输入
#include <iostream>
const int Max = 5;
int main()
{
    using namespace std;
// 获取数据
    int golf[Max];
    cout << "请输入你的高尔夫成绩。\n";
    cout << "你必须输入" << Max << "轮成绩。\n";
    int i;
    for (i = 0; i < Max; i++)
    {
        cout << "第" << i+1 << "轮：";
        while (!(cin >> golf[i])) {
            cin.clear();     // 重置输入
            while (cin.get() != '\n')
                continue;    // 清除错误输入
            cout << "请输入一个数字：";
        }
    }
// 计算平均值
    double total = 0.0;
    for (i = 0; i < Max; i++)
        total += golf[i];
// 报告结果
    cout << total / Max << " = " << Max 
            << "轮的平均成绩\n";
    // cin.get();
    // cin.get();
    return 0; 
}
