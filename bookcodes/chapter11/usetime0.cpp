// usetime0.cpp -- 使用Time类的第一个草稿
// 将usetime0.cpp和mytime0.cpp一起编译
#include <iostream>
#include "mytime0.h"

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

    total = coding.Sum(fixing);
    cout << "coding.Sum(fixing) = ";
  	total.Show();
    cout << endl;
    // std::cin.get();
    return 0;
}
