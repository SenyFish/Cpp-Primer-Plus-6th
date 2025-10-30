// Create by Shujia Huang on 2021-07-28
#include <iostream>


int main() {
    using namespace std;

    double s = 0;
    double ch;

    while (1) {

        cout << "请输入一个数字（整数/小数）（输入0退出）：";
        cin >> ch;

        if (ch == 0) {
            break;
        }

        s += ch;
        cout << "到目前为止，你输入的数字总和为：" 
             << s << endl;
    }

    return 0;
}