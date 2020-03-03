#include <iostream>
#include <chrono>
#include <vector>

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
	std::vector<int> myVector;

	for (int i = 0; i < 10000; i++)
	{
		myVector.push_back(10000 - i ^ 2);
	}

	for (int i = 10000; i < 20000; i++)
	{
		myVector.push_back(i - 10000);
	}

	std::sort(myVector.rbegin(), myVector.rend());

	return 0;
}


