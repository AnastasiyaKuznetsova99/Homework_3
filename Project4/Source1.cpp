#include <iostream>
#include <vector>
#include <list>
using namespace std;

template <typename T>
void PrintList(const list<T> &lst)
{
	for (auto i = lst.cbegin(); i != lst.cend(); ++i)
	{
		cout << *i << endl;
	}
}

int main()
{
	list<int> myList = { 15, 64, 979 };
	myList.push_back(5);
	myList.push_front(151);

	cout << "List size: " << myList.size() << endl;

	PrintList(myList);
	myList.sort(); //���������� �������� �����

	cout << "Sorted List" << endl;

	PrintList(myList);
	myList.pop_front(); //������� ������ �������� � ������ �����

	cout << "Use pop_front" << endl;

	PrintList(myList);
	myList.pop_back(); //������� ������ �������� � ����� �����

	cout << "Use pop_back" << endl;
	PrintList(myList);

	myList.reverse(); //����� �������� ����� � �������� �������
	cout << "Use reverse:" << endl;
	PrintList(myList);

	auto it = myList.begin();
	/*myList.erase(it); //�������� ��������, �� ������� ��������� ���������
	cout << "Use erase" << endl;

	PrintList(myList);*/
	advance(it, 3); //�������� �������� �� ��������� ���������� �������
	myList.insert(it, 111); //���������� �������� �� �� �������, ���� ��������� ��������
	cout << "Use insert:" << endl;
	PrintList(myList);

	myList.remove(111); //������� ���������� �������
	cout << "Use remove:" << endl;
	PrintList(myList);

	cout << "Use assign:" << endl;
	myList.assign(5, 3); //������� � ��������� ���� ���������� ����������
	PrintList(myList);

	//myList.clear(); //������� ������� ����
	//myList.unique();
	//list<int>::iterator it = myList.begin();
	/*for (auto i = myList.begin(); i != myList.end(); i++)
	{
		cout << *i << endl;
	}*/
	//cout << *it << endl;
	return 0;
}