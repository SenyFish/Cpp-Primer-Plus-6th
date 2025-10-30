// ptrstr.cpp -- 使用指向字符串的指针
#include <iostream>
#include <cstring>              // 声明strlen()、strcpy()
int main()
{
    using namespace std;
    char animal[20] = "bear";   // animal保存bear
    const char * bird = "wren"; // bird保存字符串的地址
    char * ps;                  // 未初始化

    cout << animal << " 和 ";  // 显示bear
    cout << bird << "\n";       // 显示wren
    // cout << ps << "\n";      // 可能显示垃圾，可能导致崩溃

    cout << "请输入一种动物：";
    cin >> animal;              // 如果输入<20个字符则可以
    // cin >> ps; 尝试这样做太可怕了；ps不
    //            指向已分配的空间

    ps = animal;                // 设置ps指向字符串
    cout << ps << "！\n";       // 可以，与使用animal相同
    cout << "使用strcpy()之前：\n";
    cout << animal << "，地址 " << (int *) animal << endl;
    cout << ps << "，地址 " << (int *) ps << endl;

    ps = new char[strlen(animal) + 1];  // 获取新存储空间
    strcpy(ps, animal);         // 将字符串复制到新存储空间
    cout << "使用strcpy()之后：\n";
    cout << animal << "，地址 " << (int *) animal << endl;
    cout << ps << "，地址 " << (int *) ps << " " << &ps << endl;
    delete [] ps;
    return 0; 
}
