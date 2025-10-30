// dowhile.cpp -- 出口条件循环
#include <iostream>
int main()
{
    using namespace std;
    int n;

    cout << "请输入1-10范围内的数字来找到";
    cout << "我最喜欢的数字\n";
    do
    {
        cin >> n;       // 执行循环体
    } while (n != 7);   // 然后测试
    cout << "是的，7是我最喜欢的。\n" ;
    // cin.get();
    // cin.get();
    return 0; 
}
