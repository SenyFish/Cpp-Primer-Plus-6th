// studentc.cpp -- 使用包含的Student类
#include "studentc.h"
using std::ostream;
using std::endl;
using std::istream;
using std::string;

//公有方法
double Student::Average() const
{
    if (scores.size() > 0)
        return scores.sum()/scores.size();  
    else
        return 0;
}

const string & Student::Name() const
{
    return name;
}

double & Student::operator[](int i)
{
    return scores[i];         // 使用valarray<double>::operator[]()
}

double Student::operator[](int i) const
{
    return scores[i];
}

// 私有方法
ostream & Student::arr_out(ostream & os) const
{
    int i;
    int lim = scores.size();
    if (lim > 0)
    {
        for (i = 0; i < lim; i++)
        {
            os << scores[i] << " ";
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

// 使用string版本的operator>>()
istream & operator>>(istream & is, Student & stu)
{
    is >> stu.name;
    return is; 
}

// 使用string友元getline(ostream &, const string &)
istream & getline(istream & is, Student & stu)
{
    getline(is, stu.name);
    return is;
}

// 使用string版本的operator<<()
ostream & operator<<(ostream & os, const Student & stu)
{
    os << stu.name << "的成绩：\n";
    stu.arr_out(os);  // 使用私有方法输出成绩
    return os;
}
