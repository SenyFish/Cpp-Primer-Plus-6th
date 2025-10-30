// strtype1.cpp -- 使用C++ string类
#include <iostream>
#include <string>               // 使string类可用
int main()
{
    using namespace std;
    char charr1[20];            // 创建一个空数组
    char charr2[20] = "jaguar"; // 创建一个已初始化的数组
    string str1;                // 创建一个空string对象
    string str2 = "panther";    // 创建一个已初始化的string

    cout << "请输入一种猫科动物：";
    cin >> charr1;
    cout << "请输入另一种猫科动物：";
    cin >> str1;                // 使用cin输入
    cout << "这里有一些猫科动物：\n";
    cout << charr1 << " " << charr2 << " "
         << str1 << " " << str2 // 使用cout输出
         << endl;
    cout << charr2 << " 中的第三个字母是 "
         << charr2[2] << endl;
    cout << str2 << " 中的第三个字母是 "
         << str2[2] << endl;    // 使用数组表示法
    // cin.get();
	// cin.get();

    return 0; 
}
