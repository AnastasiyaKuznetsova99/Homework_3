#include <iostream>
#include <array>



int main()
{
	std::array<int, 4> arr = { 1, 94, 77, 9 };
	arr.fill(0);

	std::cout << arr[0] << std::endl;
	std::cout << arr.at(0) << std::endl; //��������� ������ ���������� ����������

	std::cout << "Use front" << std::endl;
	std::cout << arr.front() << std::endl; //������ � ������� ��������

	std::cout << "Use back" << std::endl; 
	std::cout << arr.back() << std::endl; //������ � ���������� ��������

	for (auto el : arr)
	{
		std::cout << el << std::endl;
	}

	return 0;
}