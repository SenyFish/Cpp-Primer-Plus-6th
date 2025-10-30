// strtref.cpp -- 使用结构引用
#include <iostream>
using namespace std;
struct sysop
{
    char name[26];
    char quote[64];
    int used;
};

const sysop & use(sysop & sysopref);  // 具有引用返回类型的函数

int main()
{
// 注意：某些实现需要在两个结构声明中
// 使用关键字static以启用初始化
    sysop looper =
    {
        "Rick \"Fortran\" Looper",
        "I'm a goto kind of guy.",
        0
    };

    use(looper);            // looper的类型是sysop
    cout << "Looper：" << looper.used << "次使用\n";
    sysop copycat;
    copycat = use(looper);
    cout << "Looper：" << looper.used << "次使用\n";
    cout << "Copycat：" << copycat.used << "次使用\n";
    cout << "use(looper)：" << use(looper).used << "次使用\n";
    // cin.get();
    return 0;
}

// use()返回传递给它的引用
const sysop & use(sysop & sysopref)
{
    cout << sysopref.name << "说：\n";
    cout << sysopref.quote << endl;
    sysopref.used++;
    return sysopref; 
}
