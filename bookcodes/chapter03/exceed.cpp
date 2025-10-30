// exceed.cpp -- 超出某些整数限制
#include <iostream>
#define ZERO 0      // 使ZERO符号代表0值
#include <climits>  // 定义INT_MAX为最大int值
int main()
{
    using namespace std;
    short sam = SHRT_MAX;     // 将变量初始化为最大值
    unsigned short sue = sam;// 如果变量sam已定义则可以

    cout << "Sam有 " << sam << " 美元，Sue有 " << sue;
    cout << " 美元存款。" << endl
         << "每个账户加1美元。" << endl << "现在 ";
    sam = sam + 1;
    sue = sue + 1; 
    cout << "Sam有 " << sam << " 美元，Sue有 " << sue;
    cout << " 美元存款。\n可怜的Sam！" << endl;
    sam = ZERO;
    sue = ZERO;
    cout << "Sam有 " << sam << " 美元，Sue有 " << sue;
    cout << " 美元存款。" << endl;
    cout << "每个账户减1美元。" << endl << "现在 ";
    sam = sam - 1;
    sue = sue - 1;
    cout << "Sam有 " << sam << " 美元，Sue有 " << sue;
    cout << " 美元存款。" << endl << "幸运的Sue！" << endl;
	// cin.get();
    return 0; 
}
