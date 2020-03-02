#include <iostream>
#include <chrono>
#include <array>

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
	std::array<int, 20000> myArray;

	for (int i = 0; i < 10000; i++)
	{
		myArray[i] = 10000 - i ^ 2;
	}

	for (int i = 10000; i < 20000; i++)
	{
		myArray[i] = i - 10000;
	}

	//std::cout << "myArray" << std::endl;

	/*for (auto el : myArray)
	{
		std::cout << el << std::endl;
	}*/

	Timer myTimer;
	//myTimer.start();
	std::sort(myArray.begin(), myArray.end());
	myTimer.stop();
	std::cout << "sorted myArray" << std::endl;

	/*for (auto el : myArray)
	{
		std::cout << el << std::endl;
	}*/

	return 0;
}
