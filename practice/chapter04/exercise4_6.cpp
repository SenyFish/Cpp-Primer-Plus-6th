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

    CandyBar candbar[3] = {
        {"Mocha Munch", 2.3, 350},
        {"Big Rabbit", 5, 300},
        {"Joy Boy", 4.1, 430}
    };

    cout << "糖果的名称：" << candbar[0].name << "\n"
         << "糖果的重量：" << candbar[0].weight << "\n"
         << "热量信息：" << candbar[0].calories << "\n\n";

    cout << "糖果的名称：" << candbar[1].name << "\n"
         << "糖果的重量：" << candbar[1].weight << "\n"
         << "热量信息：" << candbar[1].calories << "\n\n";

    cout << "糖果的名称：" << candbar[2].name << "\n"
         << "糖果的重量：" << candbar[2].weight << "\n"
         << "热量信息：" << candbar[2].calories << endl;

    return 0;
}