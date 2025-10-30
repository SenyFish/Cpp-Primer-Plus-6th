// Create by Shujia Huang on 2021-07-20
#include <iostream>

int main() {

    using namespace std;

    double degree, minutes, seconds;

    cout << "请输入以度、分、秒表示的纬度。" << endl;
    cout << "首先，输入度数：";
    cin >> degree;

    cout << "接下来，输入弧分：";
    cin >> minutes;

    cout << "最后，输入弧秒：";
    cin >> seconds;

    double degree2 = degree + minutes/60 + seconds/3600;
    cout << degree << " 度，" << minutes << " 分，"
         << seconds << " 秒 = " << degree2 << " 度" << endl;

    return 0;
}