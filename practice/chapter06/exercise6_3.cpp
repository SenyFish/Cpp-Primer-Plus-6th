// Create by Shujia Huang on 2021-08-03
#include <iostream>

int main() {

    using namespace std;
    cout << "请输入以下选项之一：\n";
    cout << "c) carnivore\tp) pianist.\n"
         << "t) tree\tg) game" << endl;

    bool exit = false;
    char c;
    while (!exit && (cin >> c)) {

        switch (c) {
            case 'c': 
                cout << "老虎是肉食动物。" << endl;
                exit = true;
                break;
            case 'p':
                cout << "莫扎特是伟大的钢琴家。" << endl;
                exit = true;
                break;
            case 't':
                cout << "枫树是一种树。" << endl;
                exit = true;
                break;
            case 'g':
                cout << "超级马里奥是一款伟大的游戏。" << endl;
                exit = true;
                break;

            default:
                cout << "请输入 c、p、t 或 g：q" << endl;
                break;
        }
    }
    return 0;
}