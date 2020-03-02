#include <memory>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> myVector = { 1, 9, 44, 422, 676, 78 };
		
	//cout << *(it + 3) << endl;

	for (vector<int>::const_iterator i = myVector.begin(); i = myVector.end(); i++)
	{
		cout << *it << endl;
	}
	vector<int>::iterator it = myVector.begin();
	myVector.insert(it, 999);

	for (vector<int>::const_iterator i = myVector.begin(); i = myVector.end(); i++)
	{
		cout << *it << endl;
	}

	return 0;
}