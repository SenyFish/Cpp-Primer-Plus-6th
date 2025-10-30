// delete.cpp -- 使用delete运算符
#include <iostream>
#include <cstring>      // 或 string.h
using namespace std;
char * getname(void);   // 函数原型
int main()
{
    char * name;        // 创建指针但不分配存储空间
    name = getname();   // 将字符串地址赋给name

    cout << name << "，地址 " << (int *) name << "\n";
    delete [] name;     // 释放内存

    name = getname();   // 重用已释放的内存
    cout << name << "，地址 " << (int *) name << "\n";
    delete [] name;     // 再次释放内存
    // cin.get();
    // cin.get();
    return 0;
}

char * getname()        // 返回指向新字符串的指针
{
    char temp[80];      // 临时存储
    cout << "请输入姓氏：";
    cin >> temp;
    char * pn = new char[strlen(temp) + 1];
    strcpy(pn, temp);   // 将字符串复制到更小的空间

    return pn;          // 函数结束时temp丢失
}
