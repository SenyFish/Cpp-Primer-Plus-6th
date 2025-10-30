// switch.cpp -- 使用switch语句
#include <iostream>
using namespace std;
void showmenu();   // 函数原型
void report();
void comfort();
int main()
{
    showmenu();
    int choice;
    cin >> choice;
    while (choice != 5)
    {
        switch(choice)
        {
            case 1  :   cout << "\a\n";
                        break;
            case 2  :   report();
                        break;
            case 3  :   cout << "老板整天都在。\n";
                        break;
            case 4  :   comfort();
                        break;
            default :   cout << "这不是一个有效选项。\n";
        }
        showmenu();
        cin >> choice;
    }
    cout << "再见！\n";
    // cin.get();
    // cin.get();
    return 0;
}

void showmenu()
{
    cout << "请输入 1、2、3、4 或 5：\n"
            "1) 警报           2) 报告\n"
            "3) 不在场证明     4) 安慰\n"
            "5) 退出\n";
}
void report()
{
    cout << "这周的业务非常出色。\n"
        "销售额上升了120%。费用下降了35%。\n";
}
void comfort()
{
    cout << "你的员工认为你是行业中最优秀的CEO。\n"
        "董事会也认为你是行业中最优秀的CEO。\n";
}
