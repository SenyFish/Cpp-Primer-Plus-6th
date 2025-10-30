#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
vector<string> input;
string temp;
while (cin >> temp && temp != "退出")
    input.push_back(temp);
vector<string>::iterator want=
    find(input.begin(), input.end(), string("奖励"));
if (want != input.end())
{
    vector<string>::reference r = *want;
    r = "无效";
}
for_each(input.begin(), input.end(), [](string s){cout << s << ", ";});
cin.get();
cin.get();
}
