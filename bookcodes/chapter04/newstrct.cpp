// newstrct.cpp -- 对结构体使用new
#include <iostream>
struct inflatable   // 结构体定义
{
    char name[20];
    float volume;
    double price;
};
int main()
{
    using namespace std;
    inflatable * ps = new inflatable; // 为结构体分配内存
    cout << "请输入充气物品的名称：";
    cin.get(ps->name, 20);            // 成员访问方法1
    cout << "请输入体积（立方英尺）：";
    cin >> (*ps).volume;              // 成员访问方法2
    cout << "请输入价格：$";
    cin >> ps->price;
    cout << "名称：" << (*ps).name << endl;              // 方法2
    cout << "体积：" << ps->volume << " 立方英尺\n"; // 方法1
    cout << "价格：$" << ps->price << endl;             // 方法1
    delete ps;                        // 释放结构体使用的内存
    // cin.get();
    // cin.get();
    return 0; 
}
