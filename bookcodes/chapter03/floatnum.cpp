// floatnum.cpp -- 浮点类型
#include <iostream>
int main()
{
    using namespace std; 
    cout.setf(ios_base::fixed, ios_base::floatfield); // 定点表示
    float tub = 10.0 / 3.0;     // 精度约6位
    double mint = 10.0 / 3.0;   // 精度约15位
    const float million = 1.0e6;

    cout << "tub = " << tub;
    cout << "，一百万个tub = " << million * tub;
    cout << "，\n一千万个tub = ";
    cout << 10 * million * tub << endl;

    cout << "mint = " << mint << "，一百万个mint = ";
    cout << million * mint << endl;
    // cin.get();
    return 0;
}
