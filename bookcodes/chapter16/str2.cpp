// str2.cpp -- capacity()和reserve()
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string empty;
    string small = "bit";
    string larger = "Elephants are a girl's best friend";
    cout << "大小：\n";
    cout << "\tempty：" << empty.size() << endl;
    cout << "\tsmall：" << small.size() << endl;
    cout << "\tlarger：" << larger.size() << endl;
    cout << "容量：\n";
    cout << "\tempty：" << empty.capacity() << endl;
    cout << "\tsmall：" << small.capacity() << endl;
    cout << "\tlarger：" << larger.capacity() << endl;
    empty.reserve(50);
    cout << "empty.reserve(50)后的容量：" 
         << empty.capacity() << endl;
	// cin.get();
    return 0;
}
