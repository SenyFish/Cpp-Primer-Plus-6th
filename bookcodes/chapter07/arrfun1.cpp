// arrfun1.cpp -- 带有数组参数的函数
#include <iostream>
const int ArSize = 8;
int sum_arr(int arr[], int n);        // 原型
int main()
{
    using namespace std;
    int cookies[ArSize] = {1,2,4,8,16,32,64,128};
// 某些系统需要在int前加static以
// 启用数组初始化

    int sum = sum_arr(cookies, ArSize);
    cout << "吃掉的饼干总数：" << sum <<  "\n";
    // cin.get();
    return 0;
}

// 返回整数数组的总和
int sum_arr(int arr[], int n)
{
    int total = 0;

    for (int i = 0; i < n; i++)
        total = total + arr[i];
    return total; 
}
