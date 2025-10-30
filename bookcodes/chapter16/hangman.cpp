// hangman.cpp -- 一些string方法
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>
using std::string;
const int NUM = 26;
const string wordlist[NUM] = {"apiary", "beetle", "cereal",
    "danger", "ensign", "florid", "garage", "health", "insult",
    "jackal", "keeper", "loaner", "manage", "nonce", "onset",
    "plaid", "quilt", "remote", "stolid", "train", "useful",
    "valid", "whence", "xenon", "yearn", "zippy"};

int main()
{
    using std::cout;
    using std::cin;
    using std::tolower;
    using std::endl;
    
    std::srand(std::time(0));
    char play;
    cout << "你想玩猜单词游戏吗？<y/n> ";
    cin >> play;
    play = tolower(play);
    while (play == 'y')
    {
        string target = wordlist[std::rand() % NUM];
        int length = target.length();
        string attempt(length, '-');
        string badchars;
        int guesses = 6;
        cout << "猜我的秘密单词。它有 " << length
            << " 个字母，你每次猜\n"
            << "一个字母。你有 " << guesses
            << " 次错误猜测机会。\n";
        cout << "你的单词：" << attempt << endl;
        while (guesses > 0 && attempt != target)
        {
            char letter;
            cout << "猜一个字母：";
            cin >> letter;
            if (badchars.find(letter) != string::npos
                || attempt.find(letter) != string::npos)
            {
                cout << "你已经猜过这个了。再试一次。\n";
                    continue;
            }
            int loc = target.find(letter);
            if (loc == string::npos)
            {
                cout << "哦，猜错了！\n";
                --guesses;
                badchars += letter; // 添加到字符串
            }
            else
            {
                cout << "猜对了！\n";
                attempt[loc]=letter;
                // 检查字母是否再次出现
                loc = target.find(letter, loc + 1);
                while (loc != string::npos)
                {
                    attempt[loc]=letter;
                    loc = target.find(letter, loc + 1);
                }
           }
            cout << "你的单词：" << attempt << endl;
            if (attempt != target)
            {
                if (badchars.length() > 0)
                    cout << "错误的选择：" << badchars << endl;
                cout << "还剩 " << guesses << " 次错误猜测机会\n";
            }
        }
        if (guesses > 0)
            cout << "答对了！\n";
        else
            cout << "很遗憾，单词是 " << target << "。\n";

        cout << "还想再玩一次吗？<y/n> ";
        cin >> play;
        play = tolower(play);
    }

    cout << "再见\n";

    return 0; 
}
