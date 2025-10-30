// fun_ptr.cpp -- 指向函数的指针
#include <iostream>
double betsy(int);
double pam(int);

// 第二个参数是指向double类型函数的指针，
// 该函数接受int类型参数
void estimate(int lines, double (*pf)(int));

int main()
{
    using namespace std;
    int code;

    cout << "你需要多少行代码？";
    cin >> code;
    cout << "这是Betsy的估计：\n";
    estimate(code, betsy);
    cout << "这是Pam的估计：\n";
    estimate(code, pam);
    // cin.get();
    // cin.get();
    return 0;
}

double betsy(int lns)
{
    return 0.05 * lns;
}

double pam(int lns)
{
    return 0.03 * lns + 0.0004 * lns * lns;
}

void estimate(int lines, double (*pf)(int))
{
    using namespace std;
    cout << lines << "行代码将需要";
    cout << (*pf)(lines) << "小时\n";
}
