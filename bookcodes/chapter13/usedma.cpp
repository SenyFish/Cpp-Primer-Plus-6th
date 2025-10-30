// usedma.cpp -- 继承、友元和DMA
// 与dma.cpp一起编译
#include <iostream>
#include "dma.h"
int main()
{
    using std::cout;
    using std::endl;

    baseDMA shirt("Portabelly", 8);
    lacksDMA balloon("red", "Blimpo", 4);
    hasDMA map("Mercator", "Buffalo Keys", 5);
    cout << "显示baseDMA对象：\n";
    cout << shirt << endl;
    cout << "显示lacksDMA对象：\n";
    cout << balloon << endl;
    cout << "显示hasDMA对象：\n";
    cout << map << endl;
    lacksDMA balloon2(balloon);
    cout << "lacksDMA复制的结果：\n";
    cout << balloon2 << endl;
    hasDMA map2;
    map2 = map;
    cout << "hasDMA赋值的结果：\n";
    cout << map2 << endl;
    // std::cin.get();
    return 0; 
}
