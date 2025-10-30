// sumafile.cpp -- 带有数组参数的函数
#include <iostream>
#include <fstream>          // 文件I/O支持
#include <cstdlib>          // 支持exit()
const int SIZE = 60;
int main()
{
    using namespace std;
    char filename[SIZE];
    ifstream inFile;        // 处理文件输入的对象

    cout << "请输入数据文件名：";
    cin.getline(filename, SIZE);
    inFile.open(filename);  // 将inFile与文件关联
    if (!inFile.is_open())  // 打开文件失败
    {
        cout << "无法打开文件" << filename << endl;
        cout << "程序终止。\n";
        // cin.get();    // 保持窗口打开
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0.0;
    int count = 0;          // 读取的项目数

    inFile >> value;        // 获取第一个值
    while (inFile.good())   // 当输入良好且未到达EOF时
    {
        ++count;            // 又读取了一项
        sum += value;       // 计算累计总和
        inFile >> value;    // 获取下一个值
    }
    if (inFile.eof())
        cout << "已到达文件末尾。\n";
    else if (inFile.fail())
        cout << "由于数据不匹配而终止输入。\n";
    else
        cout << "由于未知原因而终止输入。\n";
    if (count == 0)
        cout << "没有处理数据。\n";
    else
    {
        cout << "读取的项目：" << count << endl;
        cout << "总和：" << sum << endl;
        cout << "平均值：" << sum / count << endl;
    }
    inFile.close();         // 完成文件操作
    // cin.get();
    return 0;
}
