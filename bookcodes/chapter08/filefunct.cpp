//filefunc.cpp -- 带有ostream &参数的函数
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void file_it(ostream & os, double fo, const double fe[],int n);
const int LIMIT = 5;
int main()
{
    ofstream fout;
    const char * fn = "ep-data.txt";
    fout.open(fn);
    if (!fout.is_open())
    {
        cout << "无法打开" << fn << "。再见。\n";
        exit(EXIT_FAILURE);
    }
    double objective;
    cout << "请输入你的望远镜物镜的"
            "焦距（毫米）：";
    cin >> objective;
    double eps[LIMIT];
    cout << "请输入" << LIMIT << "个目镜的"
         << "焦距（毫米）：\n";
    for (int i = 0; i < LIMIT; i++)
    {
        cout << "目镜#" << i + 1 << "：";
        cin >> eps[i];
    }
    file_it(fout, objective, eps, LIMIT);
    file_it(cout, objective, eps, LIMIT);
    cout << "完成\n";
    // cin.get();
    // cin.get();
    return 0;
}

void file_it(ostream & os, double fo, const double fe[],int n)
{
    // 保存初始格式状态
    ios_base::fmtflags initial;
    initial = os.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize sz = os.precision(0);
    os << "物镜焦距：" << fo << "毫米\n";
    os.precision(1);
    os.width(12);
    os << "目镜焦距";
    os.width(15);
    os << "放大倍数" << endl;
    for (int i = 0; i < n; i++)
    {
        os.width(12);
        os << fe[i];
        os.width(15);
        os << int (fo/fe[i] + 0.5) << endl;
    }
    // 恢复初始格式状态
    os.setf(initial, ios_base::floatfield);
    os.precision(sz);
}
