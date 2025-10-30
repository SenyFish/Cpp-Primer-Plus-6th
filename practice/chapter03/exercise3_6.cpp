// Create by Shujia Huang on 2021-07-20
#include <iostream>

int main() {
    using namespace std;
    double kilometer, oil_liter;

    cout << "请输入你行驶的距离（公里）：";
    cin >> kilometer;

    cout << "请输入油耗（升）：";
    cin >> oil_liter;

    double kilometer_per_liter = kilometer / oil_liter;
    cout << "平均油耗是 " 
         << 100 / kilometer_per_liter << " 升/100公里" << endl;
}