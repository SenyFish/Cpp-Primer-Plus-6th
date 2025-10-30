// arrstruc.cpp -- 结构体数组
#include <iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};
int main()
{
    using namespace std;
    inflatable guests[2] =          // 初始化结构体数组
    {
        {"Bambi", 0.5, 21.99},      // 数组中的第一个结构体
        {"Godzilla", 2000, 565.99}  // 数组中的下一个结构体
    };

    cout << "客人 " << guests[0].name << " 和 " << guests[1].name
         << "\n的总体积为 "
         << guests[0].volume + guests[1].volume << " 立方英尺。\n";
    // cin.get();
    return 0; 
}
