// Create by Shujia Huang on 2021-08-03
#include <iostream>
#include <cctype>


int main() {
    using namespace std;
    char ch;

    cout << "请输入任意字符：";
    while ((ch=cin.get()) != '@') {

        if (isdigit(ch)) {
            continue;
        } else if (islower(ch)) {
            ch = toupper(ch);
        } else if (isupper(ch)) {
            ch = tolower(ch);
        }

        cout << ch;

    }

    cout << "** 完成 **" << endl;

    return 0;
}