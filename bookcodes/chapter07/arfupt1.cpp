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
    typedef const double *(*p_fun)(const double *, int);
    p_fun p1 = f1;
    auto p2 = f2;  // C++0x自动类型推导
    cout << "使用指向函数的指针：\n";
    cout << " 地址  值\n";
    cout <<  (*p1)(av,3) << ": " << *(*p1)(av,3) << endl;
    cout << p2(av,3) << ": " << *p2(av,3) << endl;

    // pa是指针数组
     p_fun pa[3] = {f1,f2,f3};
    // auto不适用于列表初始化
    // 但它适用于单个值的初始化
    // pb是指向pa第一个元素的指针
    auto pb = pa;
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
    cout << (*pc)[0](av,3) << ": " << *(*pc)[0](av,3) << endl;
    // 稍微困难的声明pd的方法
	p_fun (*pd)[3] = &pa;
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
