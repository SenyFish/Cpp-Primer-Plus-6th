// protos.cpp -- 使用原型和函数调用
#include <iostream>
void cheers(int);       // 原型：无返回值
double cube(double x);  // 原型：返回double
int main()
{
    using namespace std;
    cheers(5);          // 函数调用
    cout << "请给我一个数字：";
    double side;
    cin >> side;
    double volume = cube(side);    // 函数调用
    cout << "边长为" << side <<"英尺的立方体体积为";
    cout << volume << "立方英尺。\n";
    cheers(cube(2));    // 原型保护在起作用
    // cin.get();
    // cin.get();
    return 0;
}

void cheers(int n)
{
    using namespace std;
    for (int i = 0; i < n; i++)
        cout << "欢呼！";
    cout << endl;
}

double cube(double x)
{
    return x * x * x; 
}
