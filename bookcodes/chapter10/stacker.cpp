// stacker.cpp -- 测试Stack类
#include <iostream>
#include <cctype>  // 或ctype.h
#include "stack.h"
int main()
{
    using namespace std;
    Stack st; // 创建空栈
    char ch;
    unsigned long po;
    cout << "请输入A添加采购订单，\n"
        << "P处理采购订单，或Q退出。\n";
    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')   
            continue;
        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch(ch)
        {
             case 'A':
             case 'a': cout << "请输入要添加的采购订单号：";
                       cin >> po;
                       if (st.isfull())
                           cout << "栈已满\n";
                       else
                           st.push(po);
                       break;
             case 'P':
             case 'p': if (st.isempty())
                           cout << "栈已空\n";
                       else {
                           st.pop(po);
                           cout << "采购订单#" << po << "已弹出\n";
                       }
                       break;
        }
        cout << "请输入A添加采购订单，\n"
             << "P处理采购订单，或Q退出。\n";
    }
    cout << "再见\n";
    return 0; 
}
