// arrfun4.cpp -- 带有数组范围的函数
#include <iostream>
const int ArSize = 8;
int sum_arr(const int * begin, const int * end);
int main()
{
    using namespace std;
    int cookies[ArSize] = {1,2,4,8,16,32,64,128};
//  某些系统需要在int前加static以
//  启用数组初始化

    int sum = sum_arr(cookies, cookies + ArSize);
    cout << "吃掉的饼干总数：" << sum <<  endl;
    sum = sum_arr(cookies, cookies + 3);        // 前3个元素
    cout << "前三个人吃了" << sum << "块饼干。\n";
    sum = sum_arr(cookies + 4, cookies + 8);    // 后4个元素
    cout << "后四个人吃了" << sum << "块饼干。\n";
    // cin.get();
    return 0;
}

// 返回整数数组的总和
int sum_arr(const int * begin, const int * end)
{
    const int * pt;
    int total = 0;

    for (pt = begin; pt != end; pt++)
        total = total + *pt;
    return total; 
}
