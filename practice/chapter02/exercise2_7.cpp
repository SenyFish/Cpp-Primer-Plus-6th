// Create by Shujia Huang on 2021-07-19

#include <iostream>

using namespace std;


void display_time(double hours, double minutes) {

    cout << "时间：" << hours << ":" << minutes << endl;

    return;
}

int main() {

    double hours, minutes;
    cout << "请输入小时数：";
    cin >> hours;

    cout << "请输入分钟数：";
    cin >> minutes;

    display_time(hours, minutes);

    return 0;
}