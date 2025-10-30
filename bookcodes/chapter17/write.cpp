// write.cpp -- 使用cout.write()
#include <iostream>
#include <cstring>  // or else string.h

int main()
{
    using std::cout;
    using std::endl;
    const char * state1 = "Florida";
    const char * state2 = "Kansas";
    const char * state3 = "Euphoria";
    int len = std::strlen(state2);
    cout << "递增循环索引：\n";
    int i;
    for (i = 1; i <= len; i++)
    {
        cout.write(state2,i);
        cout << endl;
    }

// 连接输出
    cout << "递减循环索引：\n";
    for (i = len; i > 0; i--)
        cout.write(state2,i) << endl;

// 超出字符串长度
    cout << "超出字符串长度：\n";
    cout.write(state2, len + 5) << endl;
    // std::cin.get();
    return 0; 
}
