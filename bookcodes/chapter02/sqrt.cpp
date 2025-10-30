// sqrt.cpp -- 使用sqrt()函数

#include <iostream>
#include <cmath>    // 或 math.h

int main()
{
    using namespace std;
   
    double area;
    cout << "请输入你家的地板面积（平方英尺）：";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "这相当于边长为 " << side 
         << " 英尺的正方形。" << endl;
    cout << "真有趣！" << endl;
	// cin.get();
	// cin.get();
    return 0;
}
