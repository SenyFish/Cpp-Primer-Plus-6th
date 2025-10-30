// more_and.cpp -- 使用逻辑AND运算符
#include <iostream>
const char * qualify[4] =       // 指针数组*/
{                               // 指向字符串
    "10000米赛跑。\n",
    "泥地拔河。\n",
    "大师独木舟竞技。\n",
    "扔馅饼节。\n"
};
int main()
{
    using namespace std;
    int age;
    cout << "请输入你的年龄（年）：";
    cin >> age;
    int index;

    if (age > 17 && age < 35)
        index = 0;
    else if (age >= 35 && age < 50)
        index = 1;
    else if (age >= 50 && age < 65)
        index = 2;
    else
        index = 3;

    cout << "你有资格参加" << qualify[index]; 
    // cin.get();
    // cin.get();
    return 0;
}
