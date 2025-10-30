// Create by Shujia Huang on 2021-07-25
#include <iostream>
#include <string>

int main() {

    using namespace std;
    string first_name, last_name;
    string final_name;

    cout << "请输入你的名字：";
    getline(cin, first_name);

    cout << "请输入你的姓氏：";
    getline(cin, last_name);

    final_name = last_name + ", " + first_name;

    cout << "这是合并后的信息：" << final_name << endl;

    return 0;
}