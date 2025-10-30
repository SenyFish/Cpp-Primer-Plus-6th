// ifelse.cpp -- 使用if else语句
#include <iostream>
int main()
{
    char ch;

    std::cout << "请输入，我会重复。\n";
    std::cin.get(ch);
    while (ch != '.')
    {
        if (ch == '\n')
            std::cout << ch;     // 如果是换行符则完成
        else
            std::cout << ++ch;   // 否则完成
        std::cin.get(ch);
    }
// 尝试用ch + 1代替++ch会有有趣的效果
    std::cout << "\n请原谅这轻微的混乱。\n";
	// std::cin.get();
	// std::cin.get();
    return 0;
}
