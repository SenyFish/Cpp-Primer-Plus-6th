// Create by Shujia Huang on 2021-08-03
#include <iostream>
#include <cctype>
#include <string>


int main() {

    using namespace std;

    unsigned int vowels = 0;
    unsigned int consonants = 0;
    unsigned int other = 0;
    string input;

    cout << "请输入单词（输入q退出）：" << endl;
    while (cin >> input) {
        if (input == "q")
            break;

        if (isalpha(input[0])) {
            switch(toupper(input[0])) {

                case 'A':;
                case 'E':;
                case 'I':;
                case 'O':;
                case 'U':
                    ++vowels;
                    break;

                default:
                    ++consonants;
                    break;
            }
        } else {
            ++other;
        }
    }

    cout << vowels << "个单词以元音字母开头。\n"
         << consonants << "个单词以辅音字母开头。\n"
         << other << "个单词以其他字符开头。" << endl;

    return 0;
}
