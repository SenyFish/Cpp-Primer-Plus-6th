// Create by Shujia Huang on 2021-08-04
#include <iostream>
#include <fstream>
#include <string>


int main() {
    using namespace std;

    string fn;
    ifstream in_file_handle;

    unsigned int n = 0;
    char ch;

    cout << "请输入文件名：";
    getline(cin, fn);

    in_file_handle.open(fn.c_str());
    while ((ch = in_file_handle.get()) != EOF) {
        ++n;
    }
    in_file_handle.close();

    cout << "文件" << fn << "中有" << n 
         << "个字符。" << endl;

    return 0;
}