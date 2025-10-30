// tempover.cpp --- 模板重载
#include <iostream>

template <typename T>            // 模板A
void ShowArray(T arr[], int n);

template <typename T>            // 模板B
void ShowArray(T * arr[], int n);

struct debts
{
    char name[50];
    double amount;
};

int main()
{
    using namespace std;
    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] =
    {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };
    double * pd[3]; 

// 将指针设置为mr_E中结构的amount成员
    for (int i = 0; i < 3; i++)
        pd[i] = &mr_E[i].amount;
    
    cout << "列出E先生的物品数量：\n";
// things是int数组
    ShowArray(things, 6);  // 使用模板A
    cout << "列出E先生的债务：\n";
// pd是指向double的指针数组
    ShowArray(pd, 3);      // 使用模板B（更特化）
    // cin.get();
    return 0;
}

template <typename T>
void ShowArray(T arr[], int n)
{
    using namespace std;
    cout << "模板A\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    cout << endl;
}

template <typename T>
void ShowArray(T * arr[], int n)
{
    using namespace std;
    cout << "模板B\n";
    for (int i = 0; i < n; i++)
        cout << *arr[i] << ' ';
    cout << endl; 
}
