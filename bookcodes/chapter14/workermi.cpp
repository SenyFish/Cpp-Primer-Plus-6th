// workermi.cpp -- 具有多重继承的工作类方法
#include "workermi.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
// Worker方法
Worker::~Worker() { }

// 受保护方法
void Worker::Data() const
{
    cout << "姓名：" << fullname << endl;
    cout << "员工ID：" << id << endl;
}

void Worker::Get()
{
    getline(cin, fullname);
    cout << "输入工人ID：";
    cin >> id;
    while (cin.get() != '\n')
        continue;
}

// Waiter方法
void Waiter::Set()
{
    cout << "输入服务员姓名：";
    Worker::Get();
    Get();
}

void Waiter::Show() const
{
    cout << "类别：服务员\n";
    Worker::Data();
    Data();
}

// 受保护方法
void Waiter::Data() const
{
    cout << "派头评级：" << panache << endl;
}

void Waiter::Get()
{
    cout << "输入服务员的派头评级：";
    cin >> panache;
    while (cin.get() != '\n')
        continue;
}

// Singer方法

char * Singer::pv[Singer::Vtypes] = {"other", "alto", "contralto",
            "soprano", "bass", "baritone", "tenor"};

void Singer::Set()
{
    cout << "输入歌手姓名：";
    Worker::Get();
    Get();
}

void Singer::Show() const
{
    cout << "类别：歌手\n";
    Worker::Data();
    Data();
}

// 受保护方法
void Singer::Data() const
{
    cout << "声域：" << pv[voice] << endl;
}

void Singer::Get()
{
    cout << "输入歌手声域编号：\n";
    int i;
    for (i = 0; i < Vtypes; i++)
    {
        cout << i << "：" << pv[i] << "   ";
        if ( i % 4 == 3)
            cout << endl;
    }
    if (i % 4 != 0)
        cout << '\n';
    while (cin >>  voice && (voice < 0 || voice >= Vtypes) )
        cout << "请输入>=0且<" << Vtypes << "的值\n";
    while (cin.get() != '\n')
        continue;
}

// SingingWaiter方法
void SingingWaiter::Data() const
{
    Singer::Data();
    Waiter::Data();
}

void SingingWaiter::Get()
{
    Waiter::Get();
    Singer::Get();
}

void SingingWaiter::Set()
{
    cout << "输入会唱歌的服务员姓名：";
    Worker::Get();
    Get();
}

void SingingWaiter::Show() const
{
    cout << "类别：会唱歌的服务员\n";
    Worker::Data();
    Data();
}
