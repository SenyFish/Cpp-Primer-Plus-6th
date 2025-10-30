// randwalk.cpp -- 使用Vector类
// 与vect.cpp文件一起编译
#include <iostream>
#include <cstdlib>      // rand(), srand()原型
#include <ctime>        // time()原型
#include "vect.h"
int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));     // 为随机数生成器设定种子
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    cout << "请输入目标距离（输入q退出）：";
    while (cin >> target)
    {
        cout << "请输入步长：";
        if (!(cin >> dstep))
            break;

        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, POL);
            result = result + step;
            steps++;
        }
        cout << "经过" << steps << "步后，对象"
            "的位置如下：\n";
        cout << result << endl;
        result.polar_mode();
        cout << "或\n" << result << endl;
        cout << "每步的平均向外距离 = "
            << result.magval()/steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "请输入目标距离（输入q退出）：";
    }
    cout << "再见！\n";
/* keep window open
    cin.clear();
    while (cin.get() != '\n')
        continue;
    cin.get();
*/
    return 0; 
}
