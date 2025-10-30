// namesp.cpp -- 命名空间
#include <iostream>
#include "namesp.h"

namespace pers
{
    using std::cout;
    using std::cin;
    void getPerson(Person & rp)
    {
        cout << "请输入名字：";
        cin >> rp.fname;
        cout << "请输入姓氏：";
        cin >> rp.lname;
    }
    
    void showPerson(const Person & rp)
    {
        std::cout << rp.lname << ", " << rp.fname;
    }
}

namespace debts
{
    void getDebt(Debt & rd)
    {
        getPerson(rd.name);
        std::cout << "请输入债务：";
        std::cin >> rd.amount;
    }
    
    void showDebt(const Debt & rd)
    {
        showPerson(rd.name);
        std::cout <<"：$" << rd.amount << std::endl;
    }
    
    double sumDebts(const Debt ar[], int n)
    {
        double total = 0;
        for (int i = 0; i < n; i++)
            total += ar[i].amount;
        return total;
    }
}
