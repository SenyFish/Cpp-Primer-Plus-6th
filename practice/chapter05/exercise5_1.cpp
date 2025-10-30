// Create by Shujia Huang on 2021-07-28
#include <iostream>

int main() {
    using namespace std;
    int number1, number2;

    cout << "请输入第一个数字：";
    cin >> number1;

    cout << "请输入第二个数字：";
    cin >> number2;

    if (number1 > number2) {
        int tmp;
        tmp = number1;
        number1 = number2;
        number2 = tmp;
    }

    int s = 0;
    for (int num=number1; num < number2+1; ++num) {
        s += num;
    }

    cout << "从 " << number1 << " 到 " << number2 
         << " 的数字之和 = " << s << endl;

    return 0;
}