// use_stui.cpp -- 使用具有私有继承的类
// 与studenti.cpp一起编译
#include <iostream>
#include "studenti.h"
using std::cin;
using std::cout;
using std::endl;

void set(Student & sa, int n);

const int pupils = 3;
const int quizzes = 5;

int main()
{
    Student ada[pupils] = 
        {Student(quizzes), Student(quizzes), Student(quizzes)};

    int i;
    for (i = 0; i < pupils; i++)
        set(ada[i], quizzes);
    cout << "\n学生名单:\n";
    for (i = 0; i < pupils; ++i)
        cout << ada[i].Name() << endl;
    cout << "\n结果：";
    for (i = 0; i < pupils; i++)
    {
        cout << endl << ada[i];
        cout << "平均分：" << ada[i].Average() << endl;
    }
    cout << "完成。\n";
    // cin.get();
    return 0;
}

void set(Student & sa, int n)
{
    cout << "请输入学生姓名：";
    getline(cin, sa);
    cout << "请输入" << n << "个测验分数：\n";
    for (int i = 0; i < n; i++)
        cin >> sa[i];
    while (cin.get() != '\n')
        continue; 
}
