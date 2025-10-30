// list.cpp -- 使用list
#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

void outint(int n) {std::cout << n << " ";}

int main()
{
    using namespace std;
    list<int> one(5, 2); // 5个2的列表
    int stuff[5] = {1,2,4,8, 6};
    list<int> two;
    two.insert(two.begin(),stuff, stuff + 5 );
    int more[6] = {6, 4, 2, 4, 6, 5};
    list<int> three(two);
    three.insert(three.end(), more, more + 6);

    cout << "列表one：";
    for_each(one.begin(),one.end(), outint);
    cout << endl << "列表two：";
    for_each(two.begin(), two.end(), outint);
    cout << endl << "列表three：";
    for_each(three.begin(), three.end(), outint);
    three.remove(2);
    cout << endl << "列表three减去2：";
    for_each(three.begin(), three.end(), outint);
    three.splice(three.begin(), one);
    cout << endl << "拼接后的列表three：";
    for_each(three.begin(), three.end(), outint);
    cout << endl << "列表one：";
    for_each(one.begin(), one.end(), outint);
    three.unique();
    cout << endl << "unique后的列表three：";
    for_each(three.begin(), three.end(), outint);
    three.sort();
    three.unique();
    cout << endl << "sort和unique后的列表three：";
    for_each(three.begin(), three.end(), outint);
    two.sort();
    three.merge(two);
    cout << endl << "排序的two合并到three：";
    for_each(three.begin(), three.end(), outint);
    cout << endl;
    // cin.get();

    return 0; 
}
