#include <memory>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> myVector = { 1, 9, 44, 422, 676, 78 };

	//cout << *(it + 3) << endl;

	for (vector<int>::const_iterator i = myVector.begin(); i != myVector.end(); i++)
	{
		cout << *i << endl;
	}
	vector<int>::iterator it = myVector.begin();
	//it++;
	advance(it, 5);
	myVector.insert(it, 999);

	cout << "use insert()" << endl;

	for (vector<int>::const_iterator i = myVector.begin(); i != myVector.end(); i++)
	{
		cout << *i << endl;
	}

	cout << "erase" << endl;
	
	vector<int>::iterator ItErase = myVector.begin();
	myVector.erase(ItErase, ItErase + 2);

	for (vector<int>::const_iterator i = myVector.begin(); i != myVector.end(); i++)
	{
		cout << *i << endl;
	}

	return 0;
}