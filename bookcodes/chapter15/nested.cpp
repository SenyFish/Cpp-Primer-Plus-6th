// nested.cpp -- 使用具有嵌套类的队列
#include <iostream>

#include <string>
#include "queuetp.h"

int main()
{
    using std::string;
    using std::cin;
    using std::cout;

    QueueTP<string> cs(5);
    string temp;

    while(!cs.isfull())
    {
        cout << "请输入您的姓名。您将按到达顺序"
                "被服务。\n"
                "姓名：";
        getline(cin, temp);
        cs.enqueue(temp);
    }
    cout << "队列已满。开始处理！\n";

    while (!cs.isempty())
    {
        cs.dequeue(temp);
        cout << "现在正在处理" << temp << "...\n";
    }
    // cin.get();
    return 0; 
}	
