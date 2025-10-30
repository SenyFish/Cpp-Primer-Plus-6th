// arfupt.cpp -- 函数指针数组
#include <iostream>
// 各种表示法，相同的签名
const double * f1(const double ar[], int n);
const double * f2(const double [], int);
const double * f3(const double *, int);

int main()
{
    using namespace std;
    double av[3] = {1112.3, 1542.6, 2227.9};

    // 指向函数的指针
    const double *(*p1)(const double *, int) = f1;
    auto p2 = f2;  // C++0x自动类型推导
    // C++0x之前可以使用以下代码
    // const double *(*p2)(const double *, int) = f2;
     cout << "使用指向函数的指针：\n";
    cout << " 地址  值\n";
    cout <<  (*p1)(av,3) << ": " << *(*p1)(av,3) << endl;
    cout << p2(av,3) << ": " << *p2(av,3) << endl;

    // pa是指针数组
    // auto不适用于列表初始化
    const double *(*pa[3])(const double *, int) = {f1,f2,f3};
    // 但它适用于单个值的初始化
    // pb是指向pa第一个元素的指针
    auto pb = pa;
    // C++0x之前可以使用以下代码
    // const double *(**pb)(const double *, int) = pa;
    cout << "\n使用指向函数的指针数组：\n";
    cout << " 地址  值\n";
    for (int i = 0; i < 3; i++)
        cout << pa[i](av,3) << ": " << *pa[i](av,3) << endl;
    cout << "\n使用指向函数指针的指针：\n";
    cout << " 地址  值\n";
    for (int i = 0; i < 3; i++)
        cout << pb[i](av,3) << ": " << *pb[i](av,3) << endl;

    // 那么指向函数指针数组的指针呢
    cout << "\n使用指向指针数组的指针：\n";
    cout << " 地址  值\n";
    // 声明pc的简单方法
    auto pc = &pa; 
     // C++0x之前可以使用以下代码
    // const double *(*(*pc)[3])(const double *, int) = &pa;
   cout << (*pc)[0](av,3) << ": " << *(*pc)[0](av,3) << endl;
    // 声明pd的困难方法
    const double *(*(*pd)[3])(const double *, int) = &pa;
    // 将返回值存储在pdb中
    const double * pdb = (*pd)[1](av,3);
    cout << pdb << ": " << *pdb << endl;
    // 替代表示法
    cout << (*(*pd)[2])(av,3) << ": " << *(*(*pd)[2])(av,3) << endl;
    // cin.get();
    return 0;
}

// 一些相当枯燥的函数

const double * f1(const double * ar, int n)
{
    return ar;
}
const double * f2(const double ar[], int n)
{
    return ar+1;
}
const double * f3(const double ar[], int n)
{
    return ar+2;
}
