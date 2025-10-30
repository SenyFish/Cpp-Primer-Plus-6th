// Create by Shujia Huang on 2021-07-28
#include <iostream>
#include <string>


int main() {
    using namespace std;

    string months[12] = {"1月", "2月", "3月", "4月", 
                         "5月", "6月", "7月", "8月", 
                         "9月", "10月", "11月", "12月"};
    int sells[3][12];
    int total_sales[3] = {0, 0, 0};

    for (int i=0; i<3; ++i) {

        cout << "请输入第" << i+1 << "年《C++ for Fools》每个月的销售量。" << endl;
        for (int j=0; j<12; ++j) {
            cout << months[j] << "：";
            cin >> sells[i][j];

            total_sales[i] += sells[i][j];

        }
    }

    for (int i=0; i<3; ++i) {
        cout << "第" << i+1 << "年总销售量为：" 
             << total_sales[i] << endl;
    }

    cout << "三年总销售量为：" 
         << total_sales[0] + total_sales[1] + total_sales[2] << endl;

    return 0;
}
