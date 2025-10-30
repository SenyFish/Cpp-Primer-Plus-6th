// enum.cpp -- 使用枚举
#include <iostream>
// 为0 - 6创建命名常量
enum {red, orange, yellow, green, blue, violet, indigo};

int main()
{
    using namespace std;
    cout << "请输入颜色代码（0-6）：";
    int code;
    cin >> code;
    while (code >= red && code <= indigo)
    {
        switch (code)
        {
            case red     : cout << "她的嘴唇是红色的。\n"; break;
            case orange  : cout << "她的头发是橙色的。\n"; break;
            case yellow  : cout << "她的鞋子是黄色的。\n"; break;
            case green   : cout << "她的指甲是绿色的。\n"; break;
            case blue    : cout << "她的运动服是蓝色的。\n"; break;
            case violet  : cout << "她的眼睛是紫罗兰色的。\n"; break;
            case indigo  : cout << "她的心情是靛蓝色的。\n"; break;
        }
        cout << "请输入颜色代码（0-6）：";
        cin >> code;
    }
    cout << "再见\n";
    // cin.get();
    // cin.get();
    return 0; 
}
