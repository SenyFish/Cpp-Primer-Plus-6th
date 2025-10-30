// usestok2.cpp -- 使用Stock类
// 与stock20.cpp一起编译
#include <iostream>
#include "stock20.h"

const int STKS = 4;
int main()
{{
// 创建已初始化对象的数组
    Stock stocks[STKS] = {
        Stock("NanoSmart", 12, 20.0),
        Stock("Boffo Objects", 200, 2.0),
        Stock("Monolithic Obelisks", 130, 3.25),
        Stock("Fleep Enterprises", 60, 6.5)
        };

    std::cout << "股票持有：\n";
    int st;
    for (st = 0; st < STKS; st++)
        stocks[st].show();
// 将指针设置为第一个元素
    const Stock * top = &stocks[0];
    for (st = 1; st < STKS; st++)
        top = &top->topval(stocks[st]);
// 现在top指向最有价值的持股
    std::cout << "\n最有价值的持股：\n";
	top->show();}
    // std::cin.get();
    return 0; 
}
