// copyit.cpp -- copy()和迭代器
#include <iostream>
#include <iterator>
#include <vector>

int main()
{
    using namespace std;

    int casts[10] = {6, 7, 2, 9 ,4 , 11, 8, 7, 10, 5};
    vector<int> dice(10);
    // 从数组复制到vector
    copy(casts, casts + 10, dice.begin());
    cout << "让骰子掷出去！\n";
    // 创建一个ostream迭代器
    ostream_iterator<int, char> out_iter(cout, " ");
    // 从vector复制到输出
    copy(dice.begin(), dice.end(), out_iter);
    cout << endl;
    cout <<"隐式使用反向迭代器。\n";
    copy(dice.rbegin(), dice.rend(), out_iter);
    cout << endl;
    cout <<"显式使用反向迭代器。\n";
   // vector<int>::reverse_iterator ri;  // 如果auto不起作用则使用
    for (auto ri = dice.rbegin(); ri != dice.rend(); ++ri)
        cout << *ri << ' ';
    cout << endl;
	// cin.get();
    return 0; 
}
