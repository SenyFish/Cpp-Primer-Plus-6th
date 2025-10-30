//error5.cpp -- 栈解退
#include <iostream>
#include <cmath> // or math.h, unix users may need -lm flag
#include <string>
#include "exc_mean.h"

class demo
{
private:
    std::string word;
public:
    demo (const std::string & str)
    {
        
        word = str;
        std::cout << "demo " << word << "已创建\n";
    }
    ~demo()
    {
        std::cout << "demo " << word << "已销毁\n";
    }
    void show() const
    {
        std::cout << "demo " << word << "存在！\n";
    }
}; 

// 函数原型
double hmean(double a, double b);
double gmean(double a, double b);
double means(double a, double b);

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    
    double x, y, z;
	{
        demo d1("在main()的块中找到");
        cout << "输入两个数字：";
        while (cin >> x >> y)
        {
               try {                  // try块开始
                   z = means(x,y);
                   cout << x << "和" << y << "的平均平均数"
                           << "是" << z << endl;
                   cout << "输入下一对：";
               } // try块结束
               catch (bad_hmean & bg)    // catch块开始
               {
                   bg.mesg();
                   cout << "请重试。\n";
                   continue;
               }                  
               catch (bad_gmean & hg) 
               {
                   cout << hg.mesg();
                   cout << "使用的值：" << hg.v1 << "，" 
                           << hg.v2 << endl;
                   cout << "抱歉，您不能再玩了。\n";
                   break;
               } // catch块结束
        }
        d1.show();
    }
    cout << "再见！\n";
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

double means(double a, double b)
{
    double am, hm, gm;
    demo d2("在means()中找到");
    am = (a + b) / 2.0;    // 算术平均数
    try 
    {
        hm = hmean(a,b);
        gm = gmean(a,b);
    }
    catch (bad_hmean & bg) // catch块开始
    {
        bg.mesg();
        std::cout << "在means()中捕获\n";
        throw;             // 重新抛出异常
    }          
    d2.show();
    return (am + hm + gm) / 3.0;
}
