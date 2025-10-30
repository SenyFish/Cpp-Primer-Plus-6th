// lambda1.cpp -- 使用捕获的变量
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <ctime>
const long Size = 390000L;

int main()
{
    using std::cout;
    std::vector<int> numbers(Size);

    std::srand(std::time(0));
    std::generate(numbers.begin(), numbers.end(), std::rand);
    cout << "样本大小 = " << Size << '\n';
// 使用lambda
    int count3 = std::count_if(numbers.begin(), numbers.end(), 
		      [](int x){return x % 3 == 0;});
    cout << "能被3整除的数字数量：" << count3 << '\n';
    int count13 = 0;
    std::for_each(numbers.begin(), numbers.end(),
         [&count13](int x){count13 += x % 13 == 0;});
    cout << "能被13整除的数字数量：" << count13 << '\n';
// 使用单个lambda
    count3 = count13 = 0;
    std::for_each(numbers.begin(), numbers.end(),
         [&](int x){count3 += x % 3 == 0; count13 += x % 13 == 0;});
    cout << "能被3整除的数字数量：" << count3 << '\n';
    cout << "能被13整除的数字数量：" << count13 << '\n';

    // std::cin.get();
    return 0;
}