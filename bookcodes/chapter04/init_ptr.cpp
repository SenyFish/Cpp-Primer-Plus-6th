// init_ptr.cpp -- 初始化指针
#include <iostream>
int main()
{
    using namespace std;
    int higgens = 5;
    int * pt = &higgens;

    cout << "higgens的值 = " << higgens
         << "；higgens的地址 = " << &higgens << endl;
    cout << "*pt的值 = " << *pt
         << "；pt的值 = " << pt << endl;
    // cin.get();
    return 0; 
}
