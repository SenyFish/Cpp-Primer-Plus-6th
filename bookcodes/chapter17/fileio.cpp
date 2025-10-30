// fileio.cpp -- 保存到文件
#include <iostream> // 许多系统不需要
#include <fstream>
#include <string>

int main()
{
    using namespace std;
    string filename;

    cout << "输入新文件名：";
    cin >> filename;

// 为新文件创建输出流对象并称之为fout
    ofstream fout(filename.c_str());

    fout << "For your eyes only!\n";        // 写入文件
    cout << "输入您的秘密数字：";   // 写入屏幕
    float secret;
    cin >> secret;
    fout << "Your secret number is " << secret << endl;
    fout.close();           // 关闭文件

// 为新文件创建输入流对象并称之为fin
    ifstream fin(filename.c_str());
    cout << "这是" << filename << "的内容：\n";
    char ch;
    while (fin.get(ch))     // 从文件读取字符并
        cout << ch;         // 写入屏幕
    cout << "完成\n";
    fin.close();
    // std::cin.get();
    // std::cin.get();
    return 0; 
}
