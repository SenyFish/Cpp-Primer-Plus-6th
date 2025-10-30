// Create by Shujia Huang on 2021-08-03
#include <iostream>
#include <string>


int main() {

    using namespace std;

    const int Grand_Amount = 10000; 

    struct Patron {
        string name;
        double amount;
    };

    int contribute_num = 0;
    cout << "请输入捐助者数量：";
    cin >> contribute_num;
    cin.get();  // 读取输入流中的回车符

    Patron *p_contribution = new Patron [contribute_num];
    for (int i = 0; i < contribute_num; ++i) {
        cout << "请输入第" << i + 1 << "个捐助者的姓名：";
        getline(cin, p_contribution[i].name);

        cout << "请输入捐款金额：";
        cin >> p_contribution[i].amount;
        cin.get();  // 读取输入流中的回车符
    }

    unsigned int grand_amount_n = 0;
    cout << "\n大捐助者：" << endl;
    for (int i = 0; i < contribute_num; ++i) {

        if (p_contribution[i].amount > Grand_Amount) {
            cout << "捐助者姓名：" << p_contribution[i].name << "\n"
                 << "捐助金额：" << p_contribution[i].amount << endl;
            ++grand_amount_n;
        }
    }

    if (grand_amount_n == 0) {
        cout << "无" << endl;
    }

    bool is_empty = true;
    cout << "\n捐助者：" << endl;
    for (int i=0; i < contribute_num; ++i) {
        cout << "捐助者姓名：" << p_contribution[i].name << "\n"
             << "捐助金额：" << p_contribution[i].amount << endl;

        is_empty = false;
    }

    if (is_empty) {
        cout << "** 无 **" << endl;
    }

    delete [] p_contribution;

    return 0;
}

