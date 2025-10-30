// strtype3.cpp -- 更多string类特性
#include <iostream>
#include <string>               // 使string类可用
#include <cstring>              // C风格字符串库
int main()
{
    using namespace std;
    char charr1[20]; 
    char charr2[20] = "jaguar"; 
    string str1;  
    string str2 = "panther";

    // string对象和字符数组的赋值
    str1 = str2;                // 将str2复制到str1
    strcpy(charr1, charr2);     // 将charr2复制到charr1
 
    // string对象和字符数组的追加
    str1 += " paste";           // 将paste添加到str1末尾
    strcat(charr1, " juice");   // 将juice添加到charr1末尾

    // 查找string对象和C风格字符串的长度
    int len1 = str1.size();     // 获取str1的长度
    int len2 = strlen(charr1);  // 获取charr1的长度
 
    cout << "字符串 " << str1 << " 包含 "
         << len1 << " 个字符。\n";
    cout << "字符串 " << charr1 << " 包含 "
         << len2 << " 个字符。\n";
    // cin.get();

    return 0; 
}
