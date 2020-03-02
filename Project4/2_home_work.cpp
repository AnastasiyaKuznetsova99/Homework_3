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
	Timer() : begin()
	{}

	~Timer() noexcept
	{}

	void start()
	{
		begin = clock_t::now();
	}
	void stop()
	{
		auto end = clock_t::now();
		std::cout << std::chrono::duration_cast <std::chrono::seconds>(end - begin).count() << std::endl;
	}
};


int main()
{
	std::array<int, 8> myArray = { 5, 3, 1, 2, 0, 7, 6, 4 };
	std::cout << "myArray" << std::endl;

	for (auto el : myArray)
	{
		std::cout << el << std::endl;
	}

	Timer myTimer = Timer();
	myTimer.start();
	std::sort(myArray.begin(), myArray.end());
	myTimer.stop();
	std::cout << "sorted myArray" << std::endl;

	for (auto el : myArray)
	{
		std::cout << el << std::endl;
	}

	return 0;
}
