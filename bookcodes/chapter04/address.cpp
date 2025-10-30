// address.cpp -- 使用&运算符查找地址
#include <iostream>
int main()
{
    using namespace std;
    int donuts = 6;
    double cups = 4.5;

    cout << "donuts的值 = " << donuts;
    cout << "，donuts的地址 = " << &donuts << endl;
// 注意：你可能需要使用unsigned (&donuts)
// 和unsigned (&cups)
    cout << "cups的值 = " << cups;
    cout << "，cups的地址 = " << &cups << endl;
    // cin.get();
    return 0; 
}
