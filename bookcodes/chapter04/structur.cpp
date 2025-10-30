// structur.cpp -- 一个简单的结构体
#include <iostream>
struct inflatable   // 结构体声明
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatable guest =
    {
        "Glorious Gloria",  // name值
        1.88,               // volume值
        29.99               // price值
    };  // guest是inflatable类型的结构体变量
// 它被初始化为指定的值
    inflatable pal =
    {
        "Audacious Arthur",
        3.12,
        32.99
    };  // pal是inflatable类型的第二个变量
// 注意：某些实现需要使用
// static inflatable guest =

    cout << "用" << guest.name << "扩展你的客人名单";
    cout << "和" << pal.name << "！\n";
// pal.name是pal变量的name成员
    cout << "两个一起只需$";
    cout << guest.price + pal.price << "！\n";
    // cin.get();
    return 0; 
}
