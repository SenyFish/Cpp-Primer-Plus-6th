// express.cpp -- 表达式的值
#include <iostream>
int main()
{
    using namespace std;
    int x;

    cout << "表达式 x = 100 的值是 ";
    cout << (x = 100) << endl;
    cout << "现在 x = " << x << endl;
    cout << "表达式 x < 3 的值是 ";
    cout << (x < 3) << endl;
    cout << "表达式 x > 3 的值是 ";
    cout << (x > 3) << endl;
    cout.setf(ios_base::boolalpha);   // 较新的C++特性
    cout << "表达式 x < 3 的值是 ";
    cout << (x < 3) << endl;
    cout << "表达式 x > 3 的值是 ";
    cout << (x > 3) << endl;
    /// cin.get();
    return 0; 
}
