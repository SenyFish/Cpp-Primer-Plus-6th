// equal.cpp -- 相等vs赋值
#include <iostream>
int main()
{
    using namespace std;
    int quizscores[10] =
        { 20, 20, 20, 20, 20, 19, 20, 18, 20, 20};

    cout << "正确的做法：\n";
    int i;
    for (i = 0; quizscores[i] == 20; i++)
        cout << "测验 " << i << " 得分是20\n";
// 警告：你可能更愿意阅读这个程序
// 而不是实际运行它。
    cout << "危险的错误做法：\n";
    for (i = 0; quizscores[i] = 20; i++)
        cout << "测验 " << i << " 得分是20\n";
	// cin.get();
    return 0;
}
