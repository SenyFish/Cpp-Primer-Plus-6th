//error4.cpp – ?????
#include <iostream>
#include <cmath> // or math.h, unix users may need -lm flag
#include "exc_mean.h"
// ????
double hmean(double a, double b);
double gmean(double a, double b);
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    
    double x, y, z;

    cout << "???????";
    while (cin >> x >> y)
    {
        try {                  // try???
            z = hmean(x,y);
            cout << x << "?" << y << "??????"
                << "?" << z << endl;
            cout << x << "?" << y << "??????"
                << "?" << gmean(x,y) << endl;
            cout << "???????<q??>?";
        }// try???
        catch (bad_hmean & bg)    // catch???
        {
            bg.mesg();
            cout << "????\n";
            continue;
        }                  
        catch (bad_gmean & hg) 
        {
            cout << hg.mesg();
            cout << "?????" << hg.v1 << "?" 
                 << hg.v2 << endl;
            cout << "??????????\n";
            break;
        } // catch???
    }
    cout << "???\n";
    // cin.get();
    // cin.get();
    return 0;
}

double hmean(double a, double b)
{
    if (a == -b)
        throw bad_hmean(a,b);
    return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
    if (a < 0 || b < 0)
        throw bad_gmean(a,b);
    return std::sqrt(a * b); 
}
