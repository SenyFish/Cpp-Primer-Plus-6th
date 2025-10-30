//
// Created by Shujia Huang on 2/9/22.
//
#include <iostream>


long factorial(int n) {

    if (n == 0) {
        return 1;
    }

    return n * factorial(n-1);
}


int main() {

    using namespace std;

    int n;
    cout << "请输入一个整数：";
    while (!(cin >> n)) {
        cin.clear();
        while (cin.get() != '\n') {
            continue;
        }
        cout << "请输入一个整数：";
    }

    if (n < 0) {
        cout << "负数没有阶乘。" << endl;
        exit(1);
    }

    long f = factorial(n);
    cout << n << "的阶乘为" << f << endl;
    return 0;
}
