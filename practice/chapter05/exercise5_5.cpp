// Create by Shujia Huang on 2021-07-28
#include <iostream>
#include <string>

int main() {
    using namespace std;

    string months[12] = {"1月", "2月", "3月", "4月", 
                         "5月", "6月", "7月", "8月", 
                         "9月", "10月", "11月", "12月"};
    int sell[12];
    int total_sales = 0;

    cout << "请输入《C++ for Fools》每个月的销售量。" << endl;
    for (int i=0; i < 12; ++i) {

        cout << months[i] << "：";
        cin >> sell[i];

        total_sales += sell[i];
    }

    cout << "\n总销售量为：" << total_sales << endl;
    for (int i=0; i < 12; ++i) {

        cout << months[i] << "：" << sell[i] << endl;
    }


    return 0;
}