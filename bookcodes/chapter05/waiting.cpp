// waiting.cpp -- 在时间延迟循环中使用clock()
#include <iostream>
#include <ctime> // 描述clock()函数、clock_t类型
int main()
{
    using namespace std;
    cout << "请输入延迟时间（秒）：";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;  // 转换为时钟滴答
    cout << "开始\a\n";
    clock_t start = clock();
    while (clock() - start < delay )        // 等待直到时间过去
        ;                                   // 注意分号
    cout << "完成\a\n";
    // cin.get();
    // cin.get();
    return 0; 
}
