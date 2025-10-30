// strfile.cpp -- 从文件读取字符串
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
int main()
{
     using namespace std;
     ifstream fin;
     fin.open("tobuy.txt");
     if (fin.is_open() == false)
     {
        cerr << "无法打开文件。再见。\n";
        exit(EXIT_FAILURE);
     }
     string item;
     int count = 0;
     
     getline(fin, item, ':');
     while (fin)  // 当输入良好时
     {
        ++count;
        cout << count <<"：" << item << endl;
        getline(fin, item,':');     
     }
     cout << "完成\n";
     fin.close();
	 // std::cin.get();
	 // std::cin.get();
     return 0;
}
