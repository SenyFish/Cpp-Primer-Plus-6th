// Create by Shujia Huang on 2021-07-28
#include <iostream>
#include <cstring>

int main() {
    using namespace std;

    int word_count = 0;
    char ch[80];
    cout << "请输入单词（输入'done'停止程序）：\n";
    do {
        cin >> ch;

        if (strcmp(ch, "done") != 0) {
            word_count++;
        }

    } while (strcmp(ch, "done") != 0);

    cout << "\n你总共输入了" << word_count << "个单词。" << endl;

    return 0;
}