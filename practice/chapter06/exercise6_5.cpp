// Create by Shujia Huang on 2021-08-03
#include <iostream>

int main() {
    using namespace std;
    const double tax_rate1 = 0.1;
    const double tax_rate2 = 0.15;
    const double tax_rate3 = 0.20;

    double income = 0.0, tax = 0.0;
    cout << "请输入你的收入：";
    while ((cin >> income) && (income > 0)) {

        if (income <= 5000) {
            tax = 0.0;
        } else if (income <= 15000 ) {

            tax = (income - 5000) * tax_rate1;
        } else if (income <= 35000) {

            tax = (15000 - 5000) * tax_rate1 + (income - 15000) * tax_rate2;
        } else {
            tax = (15000 - 5000) * tax_rate1 + (35000 - 15000) * tax_rate2 + (income - 35000) * tax_rate3;
        }

        cout << "收入 = " << income << "，税额 = " << tax << endl;
        cout << "请再次输入你的收入，或输入负值退出：";
    }

    return 0;
}