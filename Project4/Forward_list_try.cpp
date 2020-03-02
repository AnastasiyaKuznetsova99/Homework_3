#include <iostream>
#include <forward_list>


int main()
{
	std::forward_list<int> fl = { 131, 94, 494 };
	fl.push_front(1);
	fl.push_front(4);
	for (auto el : fl)
	{
		std::cout << el << std::endl;
	}
	std::cout << "Use insert_after:" << std::endl;
	std::forward_list<int>::iterator it = fl.before_begin();
	fl.insert_after(it, 9999);
	for (auto el : fl)
	{
		std::cout << el << std::endl;
	}
	return 0;
}