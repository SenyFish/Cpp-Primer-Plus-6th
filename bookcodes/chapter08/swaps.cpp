// swaps.cpp -- 使用引用和指针交换
#include <iostream>
void swapr(int & a, int & b);   // a, b是int的别名
void swapp(int * p, int * q);   // p, q是int的地址
void swapv(int a, int b);       // a, b是新变量
int main()
{
    using namespace std;
    int wallet1 = 300;
    int wallet2 = 350;

    cout << "钱包1 = $" << wallet1;
    cout << " 钱包2 = $" << wallet2 << endl;

    cout << "使用引用交换内容：\n";
    swapr(wallet1, wallet2);   // 传递变量
    cout << "钱包1 = $" << wallet1;
    cout << " 钱包2 = $" << wallet2 << endl;

    cout << "再次使用指针交换内容：\n";
    swapp(&wallet1, &wallet2); // 传递变量的地址
    cout << "钱包1 = $" << wallet1;
    cout << " 钱包2 = $" << wallet2 << endl;

    cout << "尝试使用按值传递：\n";
    swapv(wallet1, wallet2);   // 传递变量的值
    cout << "钱包1 = $" << wallet1;
    cout << " 钱包2 = $" << wallet2 << endl;
    // cin.get();
    return 0; 
}

void swapr(int & a, int & b)    // 使用引用
{
    int temp;

    temp = a;       // 使用a, b表示变量的值
    a = b;
    b = temp;
}

void swapp(int * p, int * q)    // 使用指针
{
    int temp;

    temp = *p;      // 使用*p, *q表示变量的值
    *p = *q;
    *q = temp;
}

void swapv(int a, int b)        // 尝试使用值
{
    int temp;

    temp = a;      // 使用a, b表示变量的值
    a = b;
    b = temp; 
}
