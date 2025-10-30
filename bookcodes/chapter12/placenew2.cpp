// placenew2.cpp  -- new, 定位new，不释放(delete)
#include <iostream>
#include <string>
#include <new>
using namespace std;
const int BUF = 512;

class JustTesting
{
private:
    string words;
    int number;
public:
    JustTesting(const string & s = "只是测试", int n = 0) 
    {words = s; number = n; cout << words << " 被构造\n"; }
    ~JustTesting() { cout << words << " 被销毁\n";}
    void Show() const { cout << words << ", " << number << endl;}
};
int main()
{
    char * buffer = new char[BUF];       // 分配一块内存

    JustTesting *pc1, *pc2;

    pc1 = new (buffer) JustTesting;      // 在缓冲区中构造对象
    pc2 = new JustTesting("堆对象1", 20);  // 在堆上构造对象
    
    cout << "内存块地址：\n" << "buffer: "
        << (void *) buffer << "    heap: " << pc2 <<endl;
    cout << "内存内容：\n";
    cout << pc1 << ": ";
    pc1->Show();
    cout << pc2 << ": ";
    pc2->Show();

    JustTesting *pc3, *pc4;
// 修正定位new的位置
    pc3 = new (buffer + sizeof (JustTesting))
                JustTesting("更好的做法", 6);
    pc4 = new JustTesting("堆对象2", 10);
    
    cout << "内存内容：\n";
    cout << pc3 << ": ";
    pc3->Show();
    cout << pc4 << ": ";
    pc4->Show();
    
    delete pc2;           // 释放堆对象1         
    delete pc4;           // 释放堆对象2
// 显式销毁定位new对象
    pc3->~JustTesting();  // 销毁pc3指向的对象
    pc1->~JustTesting();  // 销毁pc1指向的对象
    delete [] buffer;     // 释放缓冲区
    // std::cin.get();
    return 0;
}
