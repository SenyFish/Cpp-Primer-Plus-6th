// Create by Shujia Huang on 2021-07-25
#include <iostream>
#include <string>

struct Pizza
{
    std::string company;
    double diameter;
    double weight;
    
};

int main() {
    using namespace std;

    Pizza pizza;
    cout << "请输入披萨公司名称：";
    getline(cin, pizza.company);

    cout << "请输入披萨的直径：";
    cin >> pizza.diameter;

    cout << "请输入披萨的重量：";
    cin >> pizza.weight;

    cout << "\n以下是披萨信息：\n"
         << "公司：" << pizza.company << "\n"
         << "直径：" << pizza.diameter << "\n"
         << "重量：" << pizza.weight << endl;

    return 0;
}