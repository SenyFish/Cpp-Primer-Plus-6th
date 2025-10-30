// Create by Shujia Huang on 2021-07-25
#include <iostream>
#include <cstring>

int main() {

    using namespace std;
    char first_name[20], last_name[20];
    char final_name[50];

    cout << "请输入你的名字：";
    cin.getline(first_name, 20);

    cout << "请输入你的姓氏：";
    cin.getline(last_name, 20);

    strcpy(final_name, last_name);
    strcat(final_name, ", ");
    strcat(final_name, first_name);

    cout << "这是合并后的信息：" << final_name << endl;

    return 0;
}