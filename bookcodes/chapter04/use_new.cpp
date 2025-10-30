// use_new.cpp -- 使用new运算符
#include <iostream>
int main()
{
    using namespace std;
    int nights = 1001;
    int * pt = new int;         // 为int分配空间
    *pt = 1001;                 // 在那里存储一个值

    cout << "nights的值 = ";
    cout << nights << "：位置 " << &nights << endl;
    cout << "int ";
    cout << "值 = " << *pt << "：位置 = " << pt << endl;

    double * pd = new double;   // 为double分配空间
    *pd = 10000001.0;           // 在那里存储一个double

    cout << "double ";
    cout << "值 = " << *pd << "：位置 = " << pd << endl;
    cout << "指针pd的位置：" << &pd << endl;
    cout << "pt的大小 = " << sizeof(pt);
    cout << "：*pt的大小 = " << sizeof(*pt) << endl;
    cout << "pd的大小 = " << sizeof pd;
    cout << "：*pd的大小 = " << sizeof(*pd) << endl;
    // cin.get();
    return 0;
}
