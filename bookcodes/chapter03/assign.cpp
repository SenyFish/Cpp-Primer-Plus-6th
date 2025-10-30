// assign.cpp -- 赋值时的类型转换
#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tree = 3;     // int转换为float
    int guess = 3.9832; // float转换为int
    int debt = 7.2E12;  // 结果在C++中未定义
    cout << "tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    cout << "debt = " << debt << endl;
    // cin.get();
    return 0;
}
