// strctptr.cpp -- 带有指向结构参数的指针的函数
#include <iostream>
#include <cmath>

// 结构模板
struct polar
{
    double distance;      // 距原点的距离
    double angle;         // 从原点的方向
};
struct rect
{
    double x;             // 距原点的水平距离
    double y;             // 距原点的垂直距离
};

// 原型
void rect_to_polar(const rect * pxy, polar * pda);
void show_polar (const polar * pda);

int main()
{
    using namespace std;
    rect rplace;
    polar pplace;

    cout << "请输入x和y值：";
    while (cin >> rplace.x >> rplace.y)
    {
        rect_to_polar(&rplace, &pplace);    // 传递地址
        show_polar(&pplace);        // 传递地址
        cout << "下两个数字（输入q退出）：";
    }
    cout << "完成。\n";
    return 0;
}

// 显示极坐标，将角度转换为度
void show_polar (const polar * pda)
{
    using namespace std;
    const double Rad_to_deg = 57.29577951;

    cout << "距离 = " << pda->distance;
    cout << "，角度 = " << pda->angle * Rad_to_deg;
    cout << "度\n";
}

// 将直角坐标转换为极坐标
void rect_to_polar(const rect * pxy, polar * pda)
{
    using namespace std;
    pda->distance =
        sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
    pda->angle = atan2(pxy->y, pxy->x); 
}
