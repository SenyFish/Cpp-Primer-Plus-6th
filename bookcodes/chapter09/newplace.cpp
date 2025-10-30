// newplace.cpp -- 使用定位new
#include <iostream>
#include <new> // 用于定位new
const int BUF = 512;
const int N = 5;
char buffer[BUF];      // 内存块
int main()
{
    using namespace std;

    double *pd1, *pd2;
    int i;
    cout << "调用new和定位new：\n";
    pd1 = new double[N];           // 使用堆
    pd2 = new (buffer) double[N];  // 使用buffer数组
    for (i = 0; i < N; i++)
        pd2[i] = pd1[i] = 1000 + 20.0 * i;
    cout << "内存地址：\n" << "  堆：" << pd1
        << "  静态：" <<  (void *) buffer  <<endl;
    cout << "内存内容：\n";
    for (i = 0; i < N; i++)
    {
        cout << pd1[i] << "在" << &pd1[i] << "；";
        cout << pd2[i] << "在" << &pd2[i] << endl;
    }

    cout << "\n第二次调用new和定位new：\n";
    double *pd3, *pd4;
    pd3= new double[N];            // 查找新地址
    pd4 = new (buffer) double[N];  // 覆盖旧数据
    for (i = 0; i < N; i++)
        pd4[i] = pd3[i] = 1000 + 40.0 * i;
    cout << "内存内容：\n";
    for (i = 0; i < N; i++)
    {
        cout << pd3[i] << "在" << &pd3[i] << "；";
        cout << pd4[i] << "在" << &pd4[i] << endl;
    }

    cout << "\n第三次调用new和定位new：\n";
    delete [] pd1;
    pd1= new double[N];
    pd2 = new (buffer + N * sizeof(double)) double[N]; 
    for (i = 0; i < N; i++)
        pd2[i] = pd1[i] = 1000 + 60.0 * i;
    cout << "内存内容：\n";
    for (i = 0; i < N; i++)
    {
        cout << pd1[i] << "在" << &pd1[i] << "；";
        cout << pd2[i] << "在" << &pd2[i] << endl;
    }
    delete [] pd1;
    delete [] pd3;
    // cin.get();
    return 0;
}
