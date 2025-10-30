// Create by Shujia Huang on 2021-07-20
#include <iostream>

int main() {
    using namespace std;

    long long population_world, population_China;
    cout << "请输入世界人口：";
    cin >> population_world;
    cout << "请输入中国人口：";
    cin >> population_China;

    double rate = double(population_China)/population_world;
    cout << "中国人口占世界人口的 " << rate * 100
         << "%。" << endl;

    return 0;
}