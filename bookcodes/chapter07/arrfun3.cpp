// arrfun3.cpp -- 数组函数和const
#include <iostream>
const int Max = 5;

// 函数原型
int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);  // 不改变数据
void revalue(double r, double ar[], int n);

int main()
{
    using namespace std;
    double properties[Max];

    int size = fill_array(properties, Max);
    show_array(properties, size);
    if (size > 0)
    {
        cout << "请输入重估因子：";
        double factor;
        while (!(cin >> factor))    // 错误输入
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
           cout << "错误输入；请输入一个数字：";
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    cout << "完成。\n";
    // cin.get();
    // cin.get();
    return 0;
}

int fill_array(double ar[], int limit)
{
    using namespace std;
    double temp;
    int i;
    for (i = 0; i < limit; i++)
    {
        cout << "请输入值 #" << (i + 1) << "：";
        cin >> temp;
        if (!cin)    // 错误输入
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
           cout << "错误输入；输入过程终止。\n";
           break;
        }
        else if (temp < 0)     // 终止信号
            break;
        ar[i] = temp;
    }
    return i;
}

// 以下函数可以使用但不能改变
// 地址为ar的数组
void show_array(const double ar[], int n)
{
    using namespace std;
    for (int i = 0; i < n; i++)
    {
        cout << "房产 #" << (i + 1) << "：$";
        cout << ar[i] << endl;
    }
}

// 将ar[]的每个元素乘以r
void revalue(double r, double ar[], int n)
{
    for (int i = 0; i < n; i++)
        ar[i] *= r;
}
