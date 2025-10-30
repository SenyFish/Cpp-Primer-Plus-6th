// vect.cpp -- methods for the Vector class
#include <cmath>
#include "vect.h"   // includes <iostream>
using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR
{
    // 计算一弧度中的度数
    const double Rad_to_deg = 45.0 / atan(1.0);
    // 应该约为57.2957795130823

    // 私有方法
    // 从x和y计算大小
    void Vector::set_mag()
    {
        mag = sqrt(x * x + y * y);
    }

    void Vector::set_ang()
    {
        if (x == 0.0 && y == 0.0)
            ang = 0.0;
        else
            ang = atan2(y, x);
    }

    // 从极坐标设置x
    void Vector::set_x()
    {
        x = mag * cos(ang);
    }

    // 从极坐标设置y
    void Vector::set_y()
    {
        y = mag * sin(ang);
    }

    // 公有方法
    Vector::Vector()             // 默认构造函数
    {
        x = y = mag = ang = 0.0;
        mode = RECT;
    }

    // 如果form是r（默认），从直角坐标构造向量
    // 否则，如果form是p，从极坐标构造向量
    Vector::Vector(double n1, double n2, Mode form)
    {
        mode = form;
        if (form == RECT)
         {
             x = n1;
             y = n2;
             set_mag();
             set_ang();
        }
        else if (form == POL)
        {
             mag = n1;
             ang = n2 / Rad_to_deg;
             set_x();
             set_y();
        }
        else
        {
             cout << "Vector()的第三个参数不正确 -- ";
             cout << "向量设置为0\n";
             x = y = mag = ang = 0.0;
             mode = RECT;
        }
    }

    // 如果form是RECT（默认），从直角坐标重置向量
    // 否则，如果form是POL，从极坐标重置向量
    void Vector:: reset(double n1, double n2, Mode form)
    {
        mode = form;
        if (form == RECT)
         {
             x = n1;
             y = n2;
             set_mag();
             set_ang();
        }
        else if (form == POL)
        {
             mag = n1;
             ang = n2 / Rad_to_deg;
             set_x();
             set_y();
        }
        else
        {
             cout << "Vector()的第三个参数不正确 -- ";
             cout << "向量设置为0\n";
             x = y = mag = ang = 0.0;
             mode = RECT;
        }
    }

    Vector::~Vector()    // 析构函数
    {
    }

    void Vector::polar_mode()    // 设置为极坐标模式
    {
        mode = POL;
    }

    void Vector::rect_mode()     // 设置为直角坐标模式
    {
        mode = RECT;
    }

    // 运算符重载
    // 相加两个向量
    Vector Vector::operator+(const Vector & b) const
    {
        return Vector(x + b.x, y + b.y);
    }

    // 从a减去向量b
    Vector Vector::operator-(const Vector & b) const
    {
        return Vector(x - b.x, y - b.y);
    }

    // 反转向量符号
    Vector Vector::operator-() const
    {
        return Vector(-x, -y);
    }

    // 向量乘以n
    Vector Vector::operator*(double n) const
    {
        return Vector(n * x, n * y);
    }

    // 友元方法
    // n乘以向量a
    Vector operator*(double n, const Vector & a)
    {
        return a * n;
    }

    // 如果模式是RECT，显示直角坐标
    // 否则如果模式是POL，显示极坐标
    std::ostream & operator<<(std::ostream & os, const Vector & v)
    {
        if (v.mode == Vector::RECT)
             os << "(x,y) = (" << v.x << ", " << v.y << ")";
        else if (v.mode == Vector::POL)
        {
             os << "(m,a) = (" << v.mag << ", "
                 << v.ang * Rad_to_deg << ")";
        }
        else
             os << "向量对象模式无效";
        return os; 
    }

}  // 结束命名空间VECTOR
