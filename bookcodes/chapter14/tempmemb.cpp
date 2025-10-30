// tempmemb.cpp -- 模板成员
#include <iostream>
using std::cout;
using std::endl;

template <typename T>
class beta
{
private:
    template <typename V>  // 嵌套模板类成员
    class hold
    {
    private:
        V val;
    public:
        hold(V v  = 0) : val(v) {}
        void show() const { cout << val << endl; }
        V Value() const { return val; }
    };
    hold<T> q;             // 模板对象
    hold<int> n;           // 模板对象
public:
    beta( T t, int i) : q(t), n(i) {}
    template<typename U>   // 模板方法
    U blab(U u, T t) { return (n.Value() + q.Value()) * u / t; }
    void Show() const { q.show(); n.show();}
};

int main()
{
    beta<double> guy(3.5, 3);
    cout << "T被设置为double\n";
    guy.Show();
    cout << "V被设置为T，即double，然后V被设置为int\n";
    cout << guy.blab(10, 2.3) << endl;
    cout << "U被设置为int\n";
    cout << guy.blab(10.0, 2.3) << endl;
    cout << "U被设置为double\n";
    cout << "完成\n";
    // std::cin.get();
    return 0; 
}
