// vect2.cpp -- 方法和迭代器
#include <iostream>
#include <string>
#include <vector>

struct Review {
    std::string title;
    int rating;
};
bool FillReview(Review & rr);
void ShowReview(const Review & rr);

int main()
{
    using std::cout;
    using std::vector;
    vector<Review> books;
    Review temp;
    while (FillReview(temp))
        books.push_back(temp);
    int num = books.size();
    if (num > 0)
    {
        cout << "谢谢。您输入了以下内容：\n"
            << "评分\t书籍\n";
        for (int i = 0; i < num; i++)
            ShowReview(books[i]);
        cout << "重复：\n"
            << "评分\t书籍\n";
        vector<Review>::iterator pr;
        for (pr = books.begin(); pr != books.end(); pr++)
            ShowReview(*pr);
        vector <Review> oldlist(books);     // 使用复制构造函数
        if (num > 3)
        {
            // 删除2项
            books.erase(books.begin() + 1, books.begin() + 3);
            cout << "删除后：\n";
            for (pr = books.begin(); pr != books.end(); pr++)
                ShowReview(*pr);
            // 插入1项
            books.insert(books.begin(), oldlist.begin() + 1,
                        oldlist.begin() + 2);
            cout << "插入后：\n";
            for (pr = books.begin(); pr != books.end(); pr++)
                ShowReview(*pr);
        }
        books.swap(oldlist);
        cout << "交换oldlist和books：\n";
        for (pr = books.begin(); pr != books.end(); pr++)
            ShowReview(*pr);
    }
    else
        cout << "什么都没输入，什么都没得到。\n";
    // std::cin.get();
	return 0;
}

bool FillReview(Review & rr)
{
    std::cout << "输入书名（输入quit退出）：";
    std::getline(std::cin,rr.title);
    if (rr.title == "quit")
        return false;
    std::cout << "输入书籍评分：";
    std::cin >> rr.rating;
    if (!std::cin)
        return false;
    // 清除输入行的其余部分
    while (std::cin.get() != '\n')
        continue;
    return true;
}

void ShowReview(const Review & rr)
{
    std::cout << rr.rating << "\t" << rr.title << std::endl; 
}
