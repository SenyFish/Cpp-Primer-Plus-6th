#include <iostream>
#include <string>

int main() {
    using namespace std;

    int word_count = 0;
    string ch;
    cout << "请输入单词（输入'done'停止程序）：\n";
    do {
        cin >> ch;

        if (ch != "done") {
            word_count++;
        }

    } while (ch != "done");

    cout << "\n你总共输入了" << word_count << "个单词。" << endl;

    return 0;
}