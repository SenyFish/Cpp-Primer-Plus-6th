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

    Pizza *pizza = new Pizza;
    
    cout << "请输入披萨的直径：";
    cin >> pizza->diameter;

    cout << "请输入披萨的重量：";
    cin >> pizza->weight;

    // 注意上语句输入完 weight 后，回车键留在输入流中，以下的 getline 
    // 碰到输入流中的回车就以为结束了，所以如果没有这个 cin.get() 先读
    // 取回车，那么用户永远获得 company 的值。
    cin.get(); 

    cout << "请输入披萨公司名称：";
    getline(cin, pizza->company);

    cout << "\n以下是披萨信息：\n"
         << "公司：" << pizza->company << "\n"
         << "直径：" << pizza->diameter << "\n"
         << "重量：" << pizza->weight << endl;

    delete pizza;

    return 0;
}