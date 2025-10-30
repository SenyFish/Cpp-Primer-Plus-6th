// stdmove.cpp -- 使用std::move()
#include <iostream>
#include <utility>
// g++4.5使用以下内容
// #define nullptr 0
// 接口
class Useless
{
private:
    int n;          // 元素数量
    char * pc;      // 数据指针
    static int ct;  // 对象数量
    void ShowObject() const;
public:
    Useless();
    explicit Useless(int k);
    Useless(int k, char ch);
    Useless(const Useless & f); // 常规复制构造函数
    Useless(Useless && f);      // 移动构造函数
    ~Useless();
    Useless operator+(const Useless & f)const;
    Useless & operator=(const Useless & f); // 复制赋值
    Useless & operator=(Useless && f);      // 移动赋值
    void ShowData() const;
};

// 实现
int Useless::ct = 0;

Useless::Useless()
{
    ++ct;
    n = 0;
    pc = nullptr;
 }

Useless::Useless(int k) : n(k)
{
    ++ct; 
    pc = new char[n];
}

Useless::Useless(int k, char ch) : n(k)
{
    ++ct;
    pc = new char[n];
    for (int i = 0; i < n; i++)
        pc[i] = ch;
}

Useless::Useless(const Useless & f): n(f.n) 
{
    ++ct;
    pc = new char[n];
    for (int i = 0; i < n; i++)
        pc[i] = f.pc[i];
}

Useless::Useless(Useless && f): n(f.n) 
{
    ++ct;
    pc = f.pc;       // 窃取地址
    f.pc = nullptr;  // 不给旧对象任何回报
    f.n = 0;
}

Useless::~Useless()
{
    delete [] pc;
}

Useless & Useless::operator=(const Useless & f)  // 复制赋值
{
    std::cout << "复制赋值运算符被调用：\n";
    if (this == &f)
        return *this;
    delete [] pc;
    n = f.n;
    pc = new char[n];
    for (int i = 0; i < n; i++)
        pc[i] = f.pc[i];
    return *this;
}

Useless & Useless::operator=(Useless && f)       // 移动赋值
{
    std::cout << "移动赋值运算符被调用：\n";
    if (this == &f)
        return *this;
    delete [] pc;
    n = f.n;
    pc = f.pc;
    f.n = 0;
    f.pc = nullptr;
    return *this;
}

Useless Useless::operator+(const Useless & f)const
{
    Useless temp = Useless(n + f.n);
    for (int i = 0; i < n; i++)
        temp.pc[i] = pc[i];
    for (int i = n; i < temp.n; i++)
        temp.pc[i] = f.pc[i - n];
    return temp;
}

void Useless::ShowObject() const
{ 
    std::cout << "元素数量：" << n;
    std::cout << " 数据地址：" << (void *) pc << std::endl;
}

void Useless::ShowData() const
{
    if (n == 0)
        std::cout << "（对象为空）";
    else
        for (int i = 0; i < n; i++)
            std::cout << pc[i];
    std::cout << std::endl;
}

// 应用
int main()
{
    using std::cout;
    {
        Useless one(10, 'x');
        Useless two = one +one;   // 调用移动构造函数
        cout << "对象one：";
        one.ShowData();
        cout << "对象two：";
        two.ShowData();
        Useless three, four;
        cout << "three = one\n";
        three = one;              // 自动复制赋值
        cout << "现在对象three = ";
        three.ShowData();
        cout << "对象one = ";
        one.ShowData();
        cout << "four = one + two\n";
        four = one + two;         // 自动移动赋值
        cout << "现在对象four = ";
        four.ShowData();
        cout << "four = move(one)\n";
        four = std::move(one);    // 强制移动赋值
        cout << "现在对象four = ";
        four.ShowData();
        cout << "对象one = ";
        one.ShowData();
    }
     std::cin.get();
}