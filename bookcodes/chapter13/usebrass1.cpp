// usebrass1.cpp -- 测试银行账户类
// 与brass.cpp一起编译
#include <iostream>
#include "brass.h"

int main()
{
    using std::cout;
    using std::endl;

    Brass Piggy("Porcelot Pigg", 381299, 4000.00);
    BrassPlus Hoggy("Horatio Hogg", 382288, 3000.00);
    Piggy.ViewAcct();
    cout << endl;
    Hoggy.ViewAcct();
    cout << endl;
    cout << "向Hogg账户存入$1000：\n";
    Hoggy.Deposit(1000.00);
    cout << "新余额：$" << Hoggy.Balance() << endl;
    cout << "从Pigg账户取款$4200：\n";
    Piggy.Withdraw(4200.00);
    cout << "Pigg账户余额：$" << Piggy.Balance() << endl;
    cout << "从Hogg账户取款$4200：\n";
    Hoggy.Withdraw(4200.00);
    Hoggy.ViewAcct();
	// std::cin.get();
    return 0; 
}
