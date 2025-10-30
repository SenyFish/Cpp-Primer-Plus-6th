// block.cpp -- 使用块语句
#include <iostream>
int main()
{
    using namespace std;
    cout << "神奇的会计师将为你求和并计算";
    cout << "五个数字的平均值。\n";
    cout << "请输入五个值：\n";
    double number;
    double sum = 0.0;
    for (int i = 1; i <= 5; i++)
    {                                   // 块从这里开始
        cout << "值 " << i << "：";
        cin >> number;
        sum += number;
    }                                   // 块在这里结束
    cout << "五个绝妙的选择！";
    cout << "它们的和是 " << sum << endl;
    cout << "平均值是 " << sum / 5 << "。\n";
    cout << "神奇的会计师向你告别！\n";
    // cin.get();
    // cin.get();
    return 0; 
}
