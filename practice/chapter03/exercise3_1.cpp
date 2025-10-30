// Create by Shujia Huang on 2021-07-20

#include <iostream>


const int Foot2inch = 12;

int main() {

    using namespace std;

    int input_height = 0;
    cout << "请输入你的身高（英寸）：__\b\b";
    cin >> input_height;

    int height_foot = input_height / Foot2inch;
    int height_inch = input_height % Foot2inch;

    cout << "你的身高（英寸）是：" << input_height 
         << "；转换为英尺和英寸是：" 
         << height_foot << " 英尺 "
         << height_inch << " 英寸。" << endl;

    return 0;
}