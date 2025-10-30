// strings.cpp -- 在数组中存储字符串
#include <iostream>
#include <cstring>  // 用于strlen()函数
int main()
{
    using namespace std;
    const int Size = 15;
    char name1[Size];               // 空数组
    char name2[Size] = "C++owboy";  // 初始化的数组
    // 注意：某些实现可能需要static关键字
    // 来初始化数组name2

    cout << "你好！我是 " << name2;
    cout << "！你叫什么名字？\n";
    cin >> name1;
    cout << "好的，" << name1 << "，你的名字有 ";
    cout << strlen(name1) << " 个字母，存储在\n";
    cout << "一个 " << sizeof(name1) << " 字节的数组中。\n";
    cout << "你名字的首字母是 " << name1[0] << "。\n";
    name2[3] = '\0';                // 设置为空字符
    cout << "这是我名字的前3个字符：";
    cout << name2 << endl;
    // cin.get();
    // cin.get();
    return 0;
}
