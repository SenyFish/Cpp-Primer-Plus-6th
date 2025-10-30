// Create by Shujia Huang on 2021-07-19

#include <iostream>


double celsiu2fahrenit(double celsius) {
    return 1.8 * celsius + 32.0;
}


int main() {

    using namespace std;

    double celsius;
    cout << "请输入摄氏温度值：";
    cin >> celsius;

    cout << celsius << " 摄氏度等于 "
         << celsiu2fahrenit(celsius) << " 华氏度。" << endl;

    return 0;
}
