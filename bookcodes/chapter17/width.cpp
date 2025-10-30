// width.cpp -- 使用width方法
#include <iostream>

int main()
{
    using std::cout;
    int w = cout.width(30);
    cout << "默认字段宽度 = " << w << "：\n";

    cout.width(5);
    cout << "N" <<'：';
    cout.width(8);
    cout << "N * N" << "：\n";

    for (long i = 1; i <= 100; i *= 10)
    {
        cout.width(5);
        cout << i <<'：';
        cout.width(8);
        cout << i * i << "：\n";
    }
    // std::cin.get();
    return 0; 
}
