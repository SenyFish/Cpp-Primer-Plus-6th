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
 
    pb = new (std::nothrow) Big[10000]; // 1,600,000,000字节
	if (pb == NULL)
	{
		cout << "无法分配内存。再见。\n";
		cin.get();
		exit(EXIT_FAILURE);
	}
  
    cout << "内存成功分配\n";
    pb[0].stuff[0] = 4;
    cout << pb[0].stuff[0] << endl;
    delete []  pb;
    // cin.get();
    return 0; 
}
