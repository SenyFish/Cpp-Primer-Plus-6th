// Create by Shujia Huang on 2021-07-19 14:58:13

#include <iostream>

int main() {
    using namespace std;

    int distance = 0, yard;
    cout << "请输入以浪（Long）为单位的距离：";
    cin >> distance;
    yard = distance * 220;

    cout << "转换为码的距离是：" << yard << endl;

    return 0;
}