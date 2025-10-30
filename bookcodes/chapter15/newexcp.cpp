// newexcp.cpp -- bad_alloc异常
#include <iostream>
#include <new>
#include <cstdlib>  // for exit(), EXIT_FAILURE
using namespace std;

struct Big
{
    double stuff[20000];
};

int main()
{
    Big * pb;
    try {
        cout << "尝试获取大块内存：\n";
        pb = new Big[10000]; // 1,600,000,000字节
        cout << "通过了new请求：\n";
    }
    catch (bad_alloc & ba)
    {
        cout << "捕获了异常！\n";
        cout << ba.what() << endl;
        exit(EXIT_FAILURE);
    }
    cout << "内存成功分配\n";
    pb[0].stuff[0] = 4;
    cout << pb[0].stuff[0] << endl;
    delete [] pb;
    // cin.get();
    return 0; 
}
