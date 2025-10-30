// studenti.cpp -- 使用私有继承的Student类
#include "studenti.h"
using std::ostream;
using std::endl;
using std::istream;
using std::string;

// 公有方法
double Student::Average() const
{
    if (ArrayDb::size() > 0)
        return ArrayDb::sum()/ArrayDb::size();  
    else
        return 0;
}

const string & Student::Name() const
{
    return (const string &) *this;
}

double & Student::operator[](int i)
{
    return ArrayDb::operator[](i);         // 使用ArrayDb::operator[]()
}

double Student::operator[](int i) const
{
    return ArrayDb::operator[](i);
}

// 私有方法
ostream & Student::arr_out(ostream & os) const
{
    int i;
    int lim = ArrayDb::size();
    if (lim > 0)
    {
        for (i = 0; i < lim; i++)
        {
            os << ArrayDb::operator[](i) << " ";
            if (i % 5 == 4)
                os << endl;
        }
        if (i % 5 != 0)
            os << endl;
    }
    else
        os << "空数组";
    return os; 
}

// 友元
// 使用String版本的operator>>()
istream & operator>>(istream & is, Student & stu)
{
    is >> (string &)stu;
    return is; 
}

// 使用string友元getline(ostream &, const string &)
istream & getline(istream & is, Student & stu)
{
    getline(is, (string &)stu);
    return is;
}

// 使用string版本的operator<<()
ostream & operator<<(ostream & os, const Student & stu)
{
    os << (const string &) stu  << "的成绩：\n";
    stu.arr_out(os);  // 使用私有方法输出成绩
    return os;
}
