// Create by Shujia Huang on 2021-07-28
#include <iostream>
#include <string>


int main() {
    using namespace std;

    struct Car {
        string company;
        int year;  
    };

    int car_num = 0;
    cout << "你想要记录多少辆汽车？";
    cin >> car_num;
    cin.get();

    Car *cars = new Car[car_num];
    for (int i=0; i < car_num; ++i) {
        cout << "请输入制造商：";
        cin >> (cars+i)->company;

        cout << "请输入生产年份：";
        cin >> (cars+i)->year;
    }

    cout << "\n这是你的收藏：\n";
    for (int i=0; i < car_num; ++i) {
        cout << cars[i].year << " " << cars[i].company << endl;
    }

    delete [] cars;
    return 0;
}