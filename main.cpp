#include <iostream>
#include <algorithm>
#include <vector>

int main(int argc, char** arhv) {
	std::vector<int> vec = { 4, 7, 9, 14, 12 };

	auto print = [](const int& n) { std::cout << n << ' '; };

	std::cout << "Входные данные: ";
	std::for_each(vec.begin(), vec.end(), print);

	std::for_each(vec.begin(), vec.end(),
		[](int& n) {
			if (n % 2 != 0)  n *= 3;
		});

	std::cout << "\nВыходные данные: ";
	std::for_each(vec.begin(), vec.end(), print);

	return 0;
}