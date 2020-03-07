#include <iostream>
#include <chrono>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <cstdlib>

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
	std::cout << "Array:" << std::endl;
	std::array<int, 20000> myArray;

	for (int i = 0; i < 10000; i++)
	{
		myArray[i] = 10000 - i ^ 2;
	}

	for (int i = 10000; i < 20000; i++)
	{
		myArray[i] = i - 10000;
	}
	Timer myTimer;
	std::sort(myArray.begin(), myArray.end());
	myTimer.stop();


	std::cout << "Vector:" << std::endl;
	std::vector<int> myVector;

	for (int i = 0; i < 10000; i++)
	{
		myVector.push_back(10000 - i ^ 2);
	}

	for (int i = 10000; i < 20000; i++)
	{
		myVector.push_back(i - 10000);
	}
	Timer myTimer;
	std::sort(myVector.rbegin(), myVector.rend());
	myTimer.stop();


	std::cout << "Deque:" << std::endl;
	std::deque<int> myDeque;
	for (int i = 0; i < 10000; i++)
	{
		myDeque.push_back(10000 - i ^ 2);
	}

	for (int i = 10000; i < 20000; i++)
	{
		myDeque.push_back(i - 10000);
	}
	Timer myTimer;
	std::sort(myDeque.rbegin(), myDeque.rend());
	myTimer.stop();


	std::cout << "List:" << std::endl;
	std::list<int> myList;
	for (int i = 0; i < 10000; i++)
	{
		myList.push_back(10000 - i ^ 2);
	}

	for (int i = 10000; i < 20000; i++)
	{
		myList.push_back(i - 10000);
	}
	Timer myTimer;
	myList.sort();
	myTimer.stop();


	std::cout << "Forward_list:" << std::endl;
	std::forward_list<int> myForward_List;
	for (int i = 0; i < 10000; i++)
	{
		myForward_List.push_front(10000 - i ^ 2);
	}

	for (int i = 10000; i < 20000; i++)
	{
		myForward_List.push_front(i - 10000);
	}
	Timer myTimer;
	myForward_List.sort();
	myTimer.stop();
	return 0;
}
