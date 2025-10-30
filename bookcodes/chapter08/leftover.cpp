// leftover.cpp -- 重载left()函数
#include <iostream>
unsigned long left(unsigned long num, unsigned ct);
char * left(const char * str, int n = 1);

int main()
{
     using namespace std;
    char * trip = "Hawaii!!";   // 测试值
    unsigned long n = 12345678; // 测试值
    int i;
    char * temp;

    for (i = 1; i < 10; i++)
    {
        cout << left(n, i) << endl;
        temp = left(trip,i);
        cout << temp << endl;
        delete [] temp; // 指向临时存储
    }
    // cin.get();
    return 0;

}

// 此函数返回数字num的前ct位数字。
unsigned long left(unsigned long num, unsigned ct)
{
    unsigned digits = 1;
    unsigned long n = num;

    if (ct == 0 || num == 0)
        return 0;       // 如果没有数字则返回0
    while (n /= 10)
        digits++;
    if (digits > ct)
    {
    ct = digits - ct;
    while (ct--)
        num /= 10;
    return num;         // 返回左边的ct位数字
    }
    else                // 如果ct >= 数字位数
        return num;     // 返回整个数字
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
