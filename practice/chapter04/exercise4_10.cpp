// Create by Shujia Huang on 2021-07-25
#include <iostream>
#include <array>

int main() {

    using namespace std;

    array<double, 3> result;

    cout << "请输入三次40米跑步时间：\n";
    cin >> result[0];
    cin >> result[1];
    cin >> result[2];

    double ave_result = (result[0] + result[1] + result[2]) / 3;
    cout << "所有三次时间成绩为：" << result[0] << ", "
         << result[1] << ", " << result[2] << endl;

    cout << "平均成绩：" << ave_result << endl;

    return 0;
}