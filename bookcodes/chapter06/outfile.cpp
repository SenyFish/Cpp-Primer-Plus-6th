// outfile.cpp -- 写入文件
#include <iostream>
#include <fstream>                  // 用于文件I/O

int main()
{
    using namespace std;

    char automobile[50];
    int year;
    double a_price;
    double d_price;

    ofstream outFile;               // 创建输出对象
    outFile.open("carinfo.txt");    // 关联文件

    cout << "请输入汽车品牌和型号：";
    cin.getline(automobile, 50);
    cout << "请输入年份：";
    cin >> year;
    cout << "请输入原始要价：";
    cin >> a_price;
    d_price = 0.913 * a_price;

// 使用cout在屏幕上显示信息

    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "品牌和型号：" << automobile << endl;
    cout << "年份：" << year << endl;
    cout << "原价 $" << a_price << endl;
    cout << "现价 $" << d_price << endl;

// 现在使用outFile而不是cout做完全相同的事情

    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << "品牌和型号：" << automobile << endl;
    outFile << "年份：" << year << endl;
    outFile << "原价 $" << a_price << endl;
    outFile << "现价 $" << d_price << endl;
    
    outFile.close();                // 完成文件操作
    // cin.get();
    // cin.get();
    return 0;
}
