// Create by Shujia Huang on 2021-07-20
#include <iostream>

int main() {
    using namespace std;

    const double Km2Mile = 0.6214;
    const double Gallon2Litre = 3.875;

    double fuel_comsuption_en = 0.0;
    cout << "请输入欧洲标准的油耗：";
    cin >> fuel_comsuption_en;

    double fuel_comsuption_us = (100 * Km2Mile) / (fuel_comsuption_en/Gallon2Litre);
    cout << "美国标准的油耗是 " << fuel_comsuption_us 
         << " 英里/加仑 (mpg)。" << endl;  

    return 0;
}