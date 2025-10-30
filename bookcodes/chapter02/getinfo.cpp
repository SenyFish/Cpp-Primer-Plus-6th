// getinfo.cpp -- 输入和输出
#include <iostream>

int main()
{
    using namespace std;
    
    int carrots;
    
    cout << "你有多少根胡萝卜？" << endl;
    cin >> carrots;                // C++输入
    cout << "这里再给你两根。";
    carrots = carrots + 2;
// 下一行连接输出
    cout << "现在你有 " << carrots << " 根胡萝卜。" << endl;
	// cin.get();
	// cin.get();
    return 0;
}
