// usestok1.cpp -- 使用Stock类
// 与stock10.cpp一起编译
#include <iostream>
#include "stock10.h"

int main()
{
  {
    using std::cout;
    cout << "使用构造函数创建新对象\n";
    Stock stock1("NanoSmart", 12, 20.0);            // 语法1
    stock1.show();
    Stock stock2 = Stock ("Boffo Objects", 2, 2.0); // 语法2
    stock2.show();

    cout << "将stock1赋值给stock2：\n";
    stock2 = stock1;
    cout << "列出stock1和stock2：\n";
    stock1.show();
    stock2.show();

    cout << "使用构造函数重置对象\n";
    stock1 = Stock("Nifty Foods", 10, 50.0);    // 临时对象
    cout << "修改后的stock1：\n";
    stock1.show();
    cout << "完成\n";
  }
	// std::cin.get();
    return 0; 
}
