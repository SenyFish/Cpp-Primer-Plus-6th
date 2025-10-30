// Create by Shujia Huang on 2021-07-19

#include <iostream>

double light_years2astromonical_unit(double light_years) {

    return light_years * 63240;
}


int main() {

    using namespace std;

    double light_years;
    cout << "请输入光年数：";
    cin >> light_years;

    cout << light_years
         << " 光年 = "
         << light_years2astromonical_unit(light_years)
         << " 天文单位。" << endl;

    return 0;
}