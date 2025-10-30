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

    CandyBar *p_candybar = new CandyBar [3] {
        {"Mocha Munch", 2.3, 350},
        {"Big Rabbit", 5, 300},
        {"Joy Boy", 4.1, 430}
    };

    // 输出第一个结构体元素，按照数组的方式输出
    cout << "糖果的名称：" << p_candybar[0].name << "\n"
         << "糖果的重量：" << p_candybar[0].weight << "\n"
         << "热量信息：" << p_candybar[0].calories << "\n\n";

    // 输出第二个结构体元素，可以按照指针的逻辑输出
    cout << "糖果的名称：" << (p_candybar+1)->name << "\n"
         << "糖果的重量：" << (p_candybar+1)->weight << "\n"
         << "热量信息：" << (p_candybar+1)->calories << "\n\n";

    // 输出第三个结构体元素，又是数据的方式
    cout << "糖果的名称：" << p_candybar[2].name << "\n"
         << "糖果的重量：" << p_candybar[2].weight << "\n"
         << "热量信息：" << p_candybar[2].calories << endl;

    delete [] p_candybar;

    return 0;
}