// arrtemp.cpp -- 将模板函数与数组模板一起使用
#include <iostream>
#include <array>
#include <string>
template <class T, size_t n>
void display(const std::array<T, n> & ar);
int main()
{
	std::array<int, 5> ai = {1,2,3,4,5}; //,6,7,8,9,22};
	std::array<std::string, 5> as =
	{
		"正在构建的字符串",
		"确实是愚蠢的字符串",
		"没什么可看的",
		"无事可做",
		"但享受一切"
	};
	display(ai);
	display(as);
	// std::cin.get();
	return 0;
}
template <class T, size_t n>
void display(const std::array<T,  n> & ar)
{
	for (int i = 0; i < 5; i++)
		std::cout << ar[i] << std::endl;
}