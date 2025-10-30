// left.cpp -- 带有默认参数的字符串函数
#include <iostream>
const int ArSize = 80;
char * left(const char * str, int n = 1);
int main()
{
    using namespace std;
    char sample[ArSize];
    cout << "请输入一个字符串：\n";
    cin.get(sample,ArSize);
    char *ps = left(sample, 4);
    cout << ps << endl;
    delete [] ps;       // 释放旧字符串
    ps = left(sample);
    cout << ps << endl;
    delete [] ps;       // 释放新字符串
    // cin.get();
    // cin.get();
    return 0;
}

// 此函数返回一个指向新字符串的指针
// 该字符串由str字符串的前n个字符组成。
char * left(const char * str, int n)
{
    if(n < 0)
        n = 0;
    char * p = new char[n+1];
    int i;
    for (i = 0; i < n && str[i]; i++)
        p[i] = str[i];  // 复制字符
    while (i <= n)
        p[i++] = '\0';  // 将字符串的其余部分设置为'\0'
    return p; 
}
