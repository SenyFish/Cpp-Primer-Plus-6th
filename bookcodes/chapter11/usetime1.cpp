// usetime1.cpp -- 使用Time类的第二个草稿
// 将usetime1.cpp和mytime1.cpp一起编译
#include <iostream>
#include "mytime1.h"

int main()
{
    using std::cout;
    using std::endl;
    Time planning;
    Time coding(2, 40);
    Time fixing(5, 55);
    Time total;

    cout << "计划时间 = ";
    planning.Show();
    cout << endl;
 
    cout << "编码时间 = ";
    coding.Show();
    cout << endl;
    
    cout << "修复时间 = ";
    fixing.Show();
    cout << endl;

    total = coding + fixing;
    // 运算符表示法
    cout << "coding + fixing = ";
    total.Show();
    cout << endl;

    Time morefixing(3, 28);
    cout << "更多修复时间 = ";
    morefixing.Show();
    cout << endl;
    total = morefixing.operator+(total);
    // 函数表示法
    cout << "morefixing.operator+(total) = ";
    total.Show();
    cout << endl;
    // std::cin.get();
    return 0;
}
