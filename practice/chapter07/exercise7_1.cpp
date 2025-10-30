//
// Created by Shujia Huang on 2/9/22.
//
#include <iostream>

int main() {
    using namespace std;

    double x = 0, y = 0;
    double h_avg = 0;

    cout << "请输入两个数字：";
    cin >> x >> y;

    while (x != 0 && y != 0) {
        h_avg = 2 * x * y / (x+y);
        cout << x << "和" << y << "的调和平均数为" << h_avg << endl;
        cout << "请输入下两个数字：";
        cin >> x >> y;
    }

    return 0;
}

