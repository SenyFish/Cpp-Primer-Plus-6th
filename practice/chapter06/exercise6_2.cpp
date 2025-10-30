// Create by Shujia Huang on 2021-08-03
#include <iostream>
#include <array>


int main() {
    using namespace std;
    
    const unsigned int size = 10;
    array<double, size> donation;

    double sum_value = 0;
    unsigned int large_avg = 0, n = 0;

    cout << "请输入10个浮点数值或输入非数字值退出：";
    while ((n < size) && (cin >> donation[n])) {
        
        sum_value += donation[n];
        ++n;
    }

    double avg = sum_value / n;
    for (int i=0; i < n; i++) {

        if (donation[i]>avg)
            ++large_avg;
    }

    cout << "平均值为：" << avg
         << "，有" << large_avg
         << "个数值大于平均值。" << endl;

    return 0;
}