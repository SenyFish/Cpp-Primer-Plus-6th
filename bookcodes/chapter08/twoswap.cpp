// twoswap.cpp -- 特化覆盖模板
#include <iostream>
template <typename T>
void Swap(T &a, T &b);

struct job
{
    char name[40];
    double salary;
    int floor;
};

// 显式特化
template <> void Swap<job>(job &j1, job &j2);
void Show(job &j);

int main()
{
    using namespace std;
    cout.precision(2);
    cout.setf(ios::fixed, ios::floatfield);
    int i = 10, j = 20;
    cout << "i, j = " << i << ", " << j << "。\n";
    cout << "使用编译器生成的int交换器：\n";
    Swap(i,j);    // 生成void Swap(int &, int &)
    cout << "现在i, j = " << i << ", " << j << "。\n";

    job sue = {"Susan Yaffee", 73000.60, 7};
    job sidney = {"Sidney Taffee", 78060.72, 9};
    cout << "交换工作前：\n";
    Show(sue);
    Show(sidney);
    Swap(sue, sidney); // 使用void Swap(job &, job &)
    cout << "交换工作后：\n";
    Show(sue);
    Show(sidney);
    // cin.get();
    return 0;
}

template <typename T>
void Swap(T &a, T &b)    // 通用版本
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

// 仅交换job结构的salary和floor字段

template <> void Swap<job>(job &j1, job &j2)  // 特化
{
    double t1;
    int t2;
    t1 = j1.salary;
    j1.salary = j2.salary;
    j2.salary = t1;
    t2 = j1.floor;
    j1.floor = j2.floor;
    j2.floor = t2;
}

void Show(job &j)
{
    using namespace std;
    cout << j.name << "：$" << j.salary
         << "，在" << j.floor << "楼" << endl;
}
