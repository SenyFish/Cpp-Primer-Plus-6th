// addpntrs.cpp -- 指针加法
#include <iostream>
int main()
{
    using namespace std;
    double wages[3] = {10000.0, 20000.0, 30000.0};
    short stacks[3] = {3, 2, 1};

// 这里有两种获取数组地址的方法
    double * pw = wages;     // 数组名 = 地址
    short * ps = &stacks[0]; // 或使用地址运算符
// 与数组元素一起使用
    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    pw = pw + 1;
    cout << "给pw指针加1：\n";
    cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";

    cout << "ps = " << ps << ", *ps = " << *ps << endl;
    ps = ps + 1;
    cout << "给ps指针加1：\n";
    cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";

    cout << "使用数组表示法访问两个元素\n";
    cout << "stacks[0] = " << stacks[0] 
         << ", stacks[1] = " << stacks[1] << endl;
    cout << "使用指针表示法访问两个元素\n";

    cout << "*stacks = " << *stacks
         << ", *(stacks + 1) =  " << *(stacks + 1) << endl;

    cout << sizeof(wages) << " = wages数组的大小\n";
    cout << sizeof(pw) << " = pw指针的大小\n";
    // cin.get();
    return 0; 
}
