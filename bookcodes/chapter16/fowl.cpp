// fowl.cpp  -- auto_ptr是一个糟糕的选择
#include <iostream>
#include <string>
#include <memory>

int main()
{
    using namespace std;
    auto_ptr<string> films[5] =
    {
        auto_ptr<string> (new string("Fowl Balls")),
        auto_ptr<string> (new string("Duck Walks")),
        auto_ptr<string> (new string("Chicken Runs")),
        auto_ptr<string> (new string("Turkey Errors")),
        auto_ptr<string> (new string("Goose Eggs"))
    };
    auto_ptr<string> pwin;
    pwin = films[2];   // films[2]失去所有权

    cout << "最佳鸟类棒球电影的提名者是\n";
    for (int i = 0; i < 5; i++)
        cout << *films[i] << endl;
    cout << "获胜者是" << *pwin << "！\n";
    // cin.get();
    return 0;
}
