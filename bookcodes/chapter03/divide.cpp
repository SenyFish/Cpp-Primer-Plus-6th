// divide.cpp -- 整数和浮点数除法
#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "整数除法：9/5 = " << 9 / 5  << endl;
    cout << "浮点数除法：9.0/5.0 = ";
    cout << 9.0 / 5.0 << endl;
    cout << "混合除法：9.0/5 = " << 9.0 / 5  << endl;
    cout << "double常量：1e7/9.0 = ";
    cout << 1.e7 / 9.0 <<  endl;
    cout << "float常量：1e7f/9.0f = ";
    cout << 1.e7f / 9.0f <<  endl;
    // cin.get();
    return 0;
}
