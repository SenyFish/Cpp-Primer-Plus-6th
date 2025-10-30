// arrfun2.cpp -- 带有数组参数的函数
#include <iostream>
const int ArSize = 8;
int sum_arr(int arr[], int n);
// 使用std::代替using指令
int main()
{
    int cookies[ArSize] = {1,2,4,8,16,32,64,128};
//  某些系统需要在int前加static以
//  启用数组初始化

    std::cout << cookies << " = 数组地址，";
//  某些系统需要类型转换：unsigned (cookies)

    std::cout << sizeof cookies << " = sizeof cookies\n";
    int sum = sum_arr(cookies, ArSize);
    std::cout << "吃掉的饼干总数：" << sum <<  std::endl;
    sum = sum_arr(cookies, 3);        // 一个谎言
    std::cout << "前三个人吃了" << sum << "块饼干。\n";
    sum = sum_arr(cookies + 4, 4);    // 另一个谎言
    std::cout << "后四个人吃了" << sum << "块饼干。\n";
    // std::cin.get();
	return 0;
}

// 返回整数数组的总和
int sum_arr(int arr[], int n)
{
    int total = 0;
    std::cout << arr << " = arr，";
// 某些系统需要类型转换：unsigned (arr)

    std::cout << sizeof arr << " = sizeof arr\n";
    for (int i = 0; i < n; i++)
        total = total + arr[i];
    return total; 
}
