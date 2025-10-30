// Create by Shujia Huang on 2021-07-28
#include <iostream>

int main() {
    using namespace std;

    double daphne_account = 100;
    double cleo_account = 100;

    int year = 0;
    while (cleo_account <= daphne_account) {
        ++year;

        daphne_account += 10;
        cleo_account += cleo_account * 0.05;
    }

    cout << "经过" << year << "年后，" 
         << "Cleo的账户金额为" << cleo_account
         << "，超过了Daphne的账户金额" 
         << daphne_account << "。" << endl;

    return 0;
}
