// Create by Shujia Huang on 2021-07-25
#include <iostream>


int main() {

    using namespace std;

    char first_name[40];
    char last_name[40];
    char grade_letter;
    int age;

    cout << "你的名字是：";
    cin.getline(first_name, 40);

    cout << "你的姓氏是：";
    cin.getline(last_name, 40);

    cout << "你应该得到什么等级：";
    cin >> grade_letter;

    cout << "你的年龄是：";
    cin >> age;

    cout << "姓名：" << last_name << ", " << first_name << endl;
    cout << "等级：" << char(grade_letter+1) << "\n";
    cout << "年龄：" << age << endl;

    return 0;
}