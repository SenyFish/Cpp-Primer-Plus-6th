// Create by Shujia Huang on 2021-07-25
#include <iostream>
#include <string>

struct CandyBar
{
    std::string name;
    double weight;
    int calories;
};


int main() {
    using namespace std;

    CandyBar snack = {"Mocha Munch", 2.3, 350};  // 初始化结构体

    cout << "糖果的名称：" << snack.name << "\n";
    cout << "糖果的重量：" << snack.weight << "\n";
    cout << "热量信息：" << snack.calories << endl;

    return 0;
}

