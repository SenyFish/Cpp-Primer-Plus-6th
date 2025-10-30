// worker0.cpp -- 工作类方法
#include "worker0.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
// Worker方法

// 必须实现虚析构函数，即使是纯虚的
Worker::~Worker() {}

void Worker::Set()
{
    cout << "输入工人姓名：";
    getline(cin, fullname);
    cout << "输入工人ID：";
    cin >> id;
    while (cin.get() != '\n')
        continue;
}

void Worker::Show() const
{
    cout << "姓名：" << fullname << "\n";
    cout << "员工ID：" << id << "\n";
}

// Waiter方法
void Waiter::Set()
{
    Worker::Set();
    cout << "输入服务员的派头评级：";
    cin >> panache;
    while (cin.get() != '\n')
        continue;
}

void Waiter::Show() const
{
    cout << "类别：服务员\n";
    Worker::Show();
    cout << "派头评级：" << panache << "\n";
}

// Singer方法

char * Singer::pv[] = {"other", "alto", "contralto",
            "soprano", "bass", "baritone", "tenor"};

void Singer::Set()
{
    Worker::Set();
    cout << "输入歌手声域编号：\n";
    int i;
    for (i = 0; i < Vtypes; i++)
    {
        cout << i << "：" << pv[i] << "   ";
        if ( i % 4 == 3)
            cout << endl;
    }
    if (i % 4 != 0)
        cout << endl;
    while (cin >>  voice && (voice < 0 || voice >= Vtypes) )
        cout << "请输入>=0且<" << Vtypes << "的值\n";
    while (cin.get() != '\n')
        continue;
}

void Singer::Show() const
{
    cout << "类别：歌手\n";
    Worker::Show();
    cout << "声域：" << pv[voice] << endl;
}
