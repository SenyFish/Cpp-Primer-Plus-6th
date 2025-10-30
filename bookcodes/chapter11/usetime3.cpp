//usetime3.cpp -- 使用Time类的第四个草稿
// 将usetime3.cpp和mytime3.cpp一起编译
#include <iostream>
#include "mytime3.h"

int main()
{
    using std::cout;
    using std::endl;
    Time aida(3, 35);
    Time tosca(2, 48);
    Time temp;

    cout << "艾依达和托斯卡：\n";
    cout << aida<<"; " << tosca << endl;
    temp = aida + tosca;     // operator+()
    cout << "艾依达 + 托斯卡：" << temp << endl;
    temp = aida* 1.17;  // 成员operator*()
    cout << "艾依达 * 1.17：" << temp << endl;
    cout << "10.0 * 托斯卡：" << 10.0 * tosca << endl;
	// std::cin.get();
    return 0; 
}
