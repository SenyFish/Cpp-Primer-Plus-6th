// stacktem.cpp -- 测试模板栈类
#include <iostream>
#include <string>
#include <cctype>
#include "stacktp.h"
using std::cin;
using std::cout;

int main()
{
    Stack<std::string> st;   // 创建一个空栈
    char ch;
    std::string po;
    cout << "请输入A添加采购订单，\n"
         << "P处理订单，或Q退出。\n";
    while (cin >> ch && std::toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
            continue;
        if (!std::isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch(ch)
        {
            case 'A':
            case 'a': cout << "输入要添加的PO号码：";
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
                          cout << "PO #" << po << "已弹出\n";
                          break;
                      }
        }
        cout << "请输入A添加采购订单，\n"
             << "P处理订单，或Q退出。\n";
    }
    cout << "再见\n";
    // cin.get();
    // cin.get();
    return 0; 
}
