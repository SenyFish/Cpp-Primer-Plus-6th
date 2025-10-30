// workmi.cpp -- 多重继承
// 与workermi.cpp一起编译
#include <iostream>
#include <cstring>
#include "workermi.h"
const int SIZE = 5;

int main()
{
   using std::cin;
   using std::cout;
   using std::endl;
   using std::strchr;

   Worker * lolas[SIZE];

    int ct;
    for (ct = 0; ct < SIZE; ct++)
    {
        char choice;
        cout << "输入员工类别：\n"
            << "w：服务员  s：歌手  "
            << "t：会唱歌的服务员  q：退出\n";
        cin >> choice;
        while (strchr("wstq", choice) == NULL)
        {
            cout << "请输入w、s、t或q：";
            cin >> choice;
        }
        if (choice == 'q')
            break;
        switch(choice)
        {
            case 'w':   lolas[ct] = new Waiter;
                        break;
            case 's':   lolas[ct] = new Singer;
                        break;
            case 't':   lolas[ct] = new SingingWaiter;
                        break;
        }
        cin.get();
        lolas[ct]->Set();
    }

    cout << "\n这是您的员工：\n";
    int i;
    for (i = 0; i < ct; i++)
    {
        cout << endl;
        lolas[i]->Show();
    }
    for (i = 0; i < ct; i++)
        delete lolas[i];
    cout << "再见。\n";
    // cin.get();
    // cin.get();
    return 0; 
}
