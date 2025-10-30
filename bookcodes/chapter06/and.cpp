// and.cpp -- 使用逻辑AND运算符
#include <iostream>
const int ArSize = 6;
int main()
{
    using namespace std;
    float naaq[ArSize];
    cout << "请输入你邻居的NAAQ（新时代意识商数）。\n"
         << "当你输入" << ArSize << "个条目\n"
         << "或输入负值时程序将终止。\n";

    int i = 0;
    float temp;
    cout << "第一个值：";
    cin >> temp;
    while (i < ArSize && temp >= 0) // 2个退出条件
    {
        naaq[i] = temp;
        ++i;
        if (i < ArSize)             // 数组中还有空间，
        {
            cout << "下一个值：";
            cin >> temp;            // 所以获取下一个值
        }
    }
    if (i == 0)
        cout << "没有数据--再见\n";
    else
    {
        cout << "请输入你的NAAQ：";
        float you;
        cin >> you;
        int count = 0;
        for (int j = 0; j < i; j++)
            if (naaq[j] > you)
                ++count;
        cout << count;
        cout << "个邻居的新时代意识\n"
             << "比你更高。\n";
    }
    // cin.get();
    // cin.get();
    return 0; 
}
