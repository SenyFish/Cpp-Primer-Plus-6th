// Create by Shujia Huang on 2021-07-20
#include <iostream>

int main() {

    using namespace std;

    long total_seconds;

    cout << "请输入秒数：";
    cin >> total_seconds;

    int days = total_seconds / 86400;
    int hours = (total_seconds % 86400) / 3600;
    int minutes = ((total_seconds % 86400) % 3600) / 60;
    int seconds = ((total_seconds % 86400) % 3600) % 60;

    cout << total_seconds << " 秒 = " 
         << days << " 天，" 
         << hours << " 小时，"
         << minutes << " 分钟，"
         << seconds << " 秒。" << endl;

    return 0;
}