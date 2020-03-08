#include <iostream>
#include <chrono>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <cstdlib>
#include <random>  
#include <memory>
#include <iterator>


class Timer
{
	using clock_t = std::chrono::steady_clock;
	using timepoint_t = clock_t::time_point;

private:
	timepoint_t begin;

public:
	Timer() : begin(clock_t::now())
	{}

	~Timer() noexcept
	{}

	/*void start()
	{
		begin = clock_t::now();
	}*/

	void stop()
	{
		auto end = clock_t::now();
		std::cout << std::chrono::duration_cast <std::chrono::milliseconds>(end - begin).count() << std::endl;
	}
};



int main()
{
	std::mt19937 gen;
	gen.seed(time(0));

	std::cout << "Array:" << std::endl;
	std::array<int, 50000> myArray;

	for (int i = 0; i < 50000; ++i)
	{
		myArray[i] = gen();
	}
	
	Timer myTimer;
	std::sort(myArray.begin(), myArray.end());
	myTimer.stop();

	for (int i = 0; i < 3; ++i) 
	{
		std::cout << myArray[i] << std::endl;
	}


	/*std::cout << "Vector:" << std::endl;
	std::vector<int> myVector;

	for (int i = 0; i < 50000; ++i)
	{
		myVector.push_back(gen());
	}

	Timer myTimer;
	std::sort(myVector.begin(), myVector.end());
	myTimer.stop();

	std::vector<int>::const_iterator it = myVector.begin(); 
	std::cout << *it << std::endl;
	std::cout << *(it + 1) << std::endl;
	std::cout << *(it + 2) << std::endl;*/

	/*std::cout << "Deque:" << std::endl;
	std::deque<int> myDeque;

	for (int i = 0; i < 50000; ++i)
	{
		myDeque.push_back(gen());
	}

	Timer myTimer;
	std::sort(myDeque.begin(), myDeque.end());
	myTimer.stop();

	for (int i = 0; i < 3; ++i)
	{
		std::cout << myDeque[i] << std::endl;
	}*/


	/*std::cout << "List:" << std::endl;
	std::list<int> myList;

	for (int i = 0; i < 50000; ++i)
	{
		myList.push_back(gen());
	}

	Timer myTimer;
	myList.sort();
	myTimer.stop();

	std::list<int>::const_iterator itb = myList.begin();
	std::cout << *itb << std::endl;*/
	


	/*std::cout << "Forward_list:" << std::endl;
	std::forward_list<int> FL;

	for (int i = 0; i < 50000; ++i)
	{
		FL.push_front(gen());
	}

	for (int i = 0; i < 50000; ++i) 
	{
		FL.push_front(50000 - i);
	}

	Timer myTimer;
	FL.sort();
	myTimer.stop();

	std::forward_list<int>::iterator it = FL.begin();
	std::cout << *it << std::endl;*/

	system("pause");

	return 0;
}