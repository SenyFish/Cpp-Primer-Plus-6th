// usebrass3.cpp -- 多态示例
// 与acctacb.cpp一起编译
#include <iostream>
#include <string>
#include "acctabc.h"
const int CLIENTS = 4;

int main()
{
   using std::cin;
   using std::cout;
   using std::endl;

   AcctABC * p_clients[CLIENTS];
   std::string temp;
   long tempnum;
   double tempbal;
   char kind;

   for (int i = 0; i < CLIENTS; i++)
   {
       cout << "输入客户姓名：";
       getline(cin,temp);
       cout << "输入客户账号：";
       cin >> tempnum;
       cout << "输入初始余额：$";
       cin >> tempbal;
       cout << "输入1代表Brass账户或"
            << "2代表BrassPlus账户：";
       while (cin >> kind && (kind != '1' && kind != '2'))
           cout <<"请输入1或2：";
       if (kind == '1')
           p_clients[i] = new Brass(temp, tempnum, tempbal);
       else
       {
           double tmax, trate;
           cout << "输入透支限额：$";
           cin >> tmax;
           cout << "以小数形式输入利率：";
           cin >> trate;
           p_clients[i] = new BrassPlus(temp, tempnum, tempbal,
                                        tmax, trate);
        }
        while (cin.get() != '\n')
            continue;
   }
   cout << endl;
   for (int i = 0; i < CLIENTS; i++)
   {
       p_clients[i]->ViewAcct();
       cout << endl;
   }
              
   for (int i = 0; i < CLIENTS; i++)
   {
       delete p_clients[i];  // 释放内存
   }
   cout << "完成。\n";    
   // cin.get();
   return 0; 
}
