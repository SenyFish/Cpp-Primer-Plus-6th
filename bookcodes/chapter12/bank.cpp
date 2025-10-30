// bank.cpp -- 使用Queue接口
// 使用queue.cpp编译
#include <iostream>
#include <cstdlib> // 用于rand()和srand()
#include <ctime>   // 用于time()
#include "queue.h"
const int MIN_PER_HR = 60;

bool newcustomer(double x); // 是否有新顾客到来？

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios_base;
// 初始化设置
    std::srand(std::time(0));    // 随机初始化rand()

    cout << "案例分析：希瑟银行自动取款机\n";
    cout << "请输入队列的最大长度：";
    int qs;
    cin >> qs;
    Queue line(qs);         // 队列line最多容纳qs人

    cout << "请输入模拟时长（小时）：";
    int hours;              // 模拟总小时数
    cin >> hours;
    // 模拟将以每分钟1次的速度运行
    long cyclelimit = MIN_PER_HR * hours; // 总运行周期数

    cout << "请输入每小时平均客户数：";
    double perhour;         // 每小时平均到达客户数
    cin >> perhour;
    double min_per_cust;    // 平均到达间隔
    min_per_cust = MIN_PER_HR / perhour;

    Item temp;              // 新顾客数据
    long turnaways = 0;     // 被满队列拒绝的人数
    long customers = 0;     // 进入队列的人数
    long served = 0;        // 在模拟期间服务的人数
    long sum_line = 0;      // 队列长度累计
    int wait_time = 0;      // 取款机空闲时间
    long line_wait = 0;     // 等待累计时长

// 开始模拟
    for (int cycle = 0; cycle < cyclelimit; cycle++)
    {
        if (newcustomer(min_per_cust))  // 有新顾客到达
        {
            if (line.isfull())
                turnaways++;
            else
            {
                customers++;
                temp.set(cycle);    // cycle为到达时间
                line.enqueue(temp); // 新顾客入队
            }
        }
        if (wait_time <= 0 && !line.isempty())
        {
            line.dequeue (temp);      // 服务下一个顾客
            wait_time = temp.ptime(); // 取款机需忙wait_time分钟
            line_wait += cycle - temp.when();
            served++;
        }
        if (wait_time > 0)
            wait_time--;
        sum_line += line.queuecount();
    }

// 输出结果
    if (customers > 0)
    {
        cout << "已接待客户总数：" << customers << endl;
        cout << "  已服务客户总数：" << served << endl;
        cout << "      被拒人数：" << turnaways << endl;
        cout << "队列平均长度：";
        cout.precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout << (double) sum_line / cyclelimit << endl;
        cout << " 平均等待时间："
             << (double) line_wait / served << " 分钟\n";
    }
    else
        cout << "没有客户到来！\n";
    cout << "完成！\n";
    // cin.get();
    // cin.get();
    return 0;
}

//  x = 客户到达间隔的平均时间（分钟）
//  如果这一分钟有客户到达则返回true
bool newcustomer(double x)
{
    return (std::rand() * x / RAND_MAX < 1); 
}
