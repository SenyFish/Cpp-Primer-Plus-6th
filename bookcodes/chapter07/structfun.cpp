// strctfun.cpp -- 带有结构参数的函数
#include <iostream>
#include <cmath>

// 结构声明
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
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int main()
{
    using namespace std;
    rect rplace;
    polar pplace;

    cout << "请输入x和y值：";
    while (cin >> rplace.x >> rplace.y)  // cin的巧妙使用
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "下两个数字（输入q退出）：";
    }
    cout << "完成。\n";
    return 0;
}

// 将直角坐标转换为极坐标
polar rect_to_polar(rect xypos)
{
    using namespace std;
    polar answer;

    answer.distance =
        sqrt( xypos.x * xypos.x + xypos.y * xypos.y);
    answer.angle = atan2(xypos.y, xypos.x);
    return answer;      // 返回极坐标结构
}

// 显示极坐标，将角度转换为度
void show_polar (polar dapos)
{
    using namespace std;
    const double Rad_to_deg = 57.29577951;

    cout << "距离 = " << dapos.distance;
    cout << "，角度 = " << dapos.angle * Rad_to_deg;
    cout << "度\n";
}
