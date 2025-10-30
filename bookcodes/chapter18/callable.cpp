// callable.cpp -- 可调用类型和模板
#include <iostream>
#include <math.h>
using namespace std;

template <typename T, typename F>
T use_f(T v, F f)
{
    static int count = 0;
    count++;
    cout << "  use_f计数 = " << count << "，&count = " << &count << endl;
    return f(v);
}

class Fp
{
private:
    double z_;
public:
    Fp(double z = 1.0) : z_(z) {}
    double operator()(double p) { return z_*p; }
};
 class Fq
{
private:
    double z_;
public:
    Fq(double z = 1.0) : z_(z) {}
    double operator()(double q) { return z_+ q; }
};

double dub(double x) {return 2.0*x;}

int main()
{
    double y = 1.21;
    cout << "函数指针dub：\n";
    cout << "  " << use_f(y, dub) << endl;
    cout << "函数指针sqrt：\n";
    cout << "  " << use_f(y, sqrt) << endl;
    cout << "函数对象Fp：\n";
    cout << "  " << use_f(y, Fp(5.0)) << endl;
    cout << "函数对象Fq：\n";
    cout << "  " << use_f(y, Fq(5.0)) << endl;
    cout << "Lambda表达式1：\n";
    cout << "  " << use_f(y, [](double u) {return u*u;}) << endl;
    cout << "Lambda表达式2：\n";
    cout << "  " << use_f(y, [](double u) {return u+u/2.0;}) << endl;
  
    cin.get();
    return 0;
}
