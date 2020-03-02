#include <iostream>
#include <array>



int main()
{
	std::array<int, 4> arr = { 1, 94, 77, 9 };
	arr.fill(0);

	std::cout << arr[0] << std::endl;
	std::cout << arr.at(0) << std::endl; //заполняет массив указанными элементами

	std::cout << "Use front" << std::endl;
	std::cout << arr.front() << std::endl; //доступ к первому элементу

	std::cout << "Use back" << std::endl; 
	std::cout << arr.back() << std::endl; //доступ к последнему элементу

	for (auto el : arr)
	{
		std::cout << el << std::endl;
	}

	return 0;
}