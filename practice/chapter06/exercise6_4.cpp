// Create by Shujia Huang on 2021-08-03
#include <iostream>


int main() {

    using namespace std;

    const int strsize = 80;
    struct Bop {
        char fullname[strsize]; // 真实姓名
        char title[strsize];    // 职位
        char bopname[strsize];  // BOP秘密名称
        int preference;         // 0 = fullname, 1 = title, 2 = bopname
    };

    const int size = 5;
    const Bop bops[size] = {
        {"Wimp Macho", "bbb", "c", 0},
        {"Raki Rhodes", "2XXXX", "3XXXXX", 1},
        {"Celia Laiter", "2AAAA", "3AAAAA", 2},
        {"Hoppy Hipman", "2BBBB", "3BBBBB", 0},
        {"Pat Hand", "4CCCC", "3CCCCC", 1}
    };

    cout << "仁爱的程序员团体报告。\n";
    cout << "a. 按姓名显示     b. 按职位显示\n"
         << "c. 按BOP名称显示  d. 按偏好显示\n"
         << "q. 退出" << endl;

    char ch;
    while (cin >> ch) {

        if (ch == 'q') { 
            break; 
        }

        for (int i=0; i < size; ++i) {

            switch (ch) {
                case 'a':
                    cout << bops[i].fullname << "\n";
                    break;
                case 'b':
                    cout << bops[i].title << "\n";
                    break;
                case 'c':
                    cout << bops[i].bopname << "\n";
                    break;
                case 'd':
                    cout << bops[i].preference << "\n";
                    break;

                default:
                    break;
            }
        }

        cout << "下一个选项：";
    }
    cout << "** 完成 **" << endl;
    return 0;
}

