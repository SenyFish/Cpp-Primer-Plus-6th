// assgn_st.cpp -- 结构体赋值
#include <iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};
int main()
{
    using namespace std;
    inflatable bouquet =
    {
        "sunflowers",
        0.20,
        12.49
    };
    inflatable choice;
    cout << "bouquet：" << bouquet.name << "，售价 $";
    cout << bouquet.price << endl;

    choice = bouquet;  // 将一个结构体赋值给另一个
    cout << "choice：" << choice.name << "，售价 $";
    cout << choice.price << endl;
    // cin.get();
    return 0; 
}
