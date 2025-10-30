// numstr.cpp -- 数字输入后跟行输入
#include <iostream>
int main()
{
    using namespace std;
    cout << "你的房子是哪一年建的？\n";
    int year;
    cin >> year;
    // cin.get();
    cout << "它的街道地址是什么？\n";
    char address[80];
    cin.getline(address, 80);
    cout << "建造年份：" << year << endl;
    cout << "地址：" << address << endl;
    cout << "完成！\n";
    // cin.get();
    return 0; 
}
