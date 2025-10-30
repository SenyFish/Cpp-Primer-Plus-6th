/* 显示一条消息
 */

#include <iostream>                           // 一个预处理指令

int main() {                                 // 函数头部
    // 函数体开始
    using namespace std;                      // 使定义可见
    cout << "你好，世界！" << endl;           // 消息

    cout << "快来用 C++ 编程吧！"
         << endl;
    cout << "你一定不会后悔的！" << endl;

    // 如果输出窗口关闭得太快导致你看不见结果，
    // 请添加以下代码：
    cout << "请按任意键继续。" << endl;
    cin.get();
    return 0;                                 // 结束 main()
}                                             // 函数体结束
