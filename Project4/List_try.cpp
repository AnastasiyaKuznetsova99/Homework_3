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
	myList.sort(); //сортировка значений листа

	cout << "Sorted List" << endl;

	PrintList(myList);
	myList.pop_front(); //вставка одного элемента в начало листа

	cout << "Use pop_front" << endl;

	PrintList(myList);
	myList.pop_back(); //вставка одного элемента в конец листа

	cout << "Use pop_back" << endl;
	PrintList(myList);

	myList.reverse(); //вывод значений листа в обратном порядке
	cout << "Use reverse:" << endl;
	PrintList(myList);

	auto it = myList.begin();
	/*myList.erase(it); //удаление элемента, на который указывает интератор
	cout << "Use erase" << endl;

	PrintList(myList);*/
	advance(it, 3); //сдвигает итератор на указанное количество позиций
	myList.insert(it, 111); //добавление элемента на ту позицию, куда указывает итератор
	cout << "Use insert:" << endl;
	PrintList(myList);

	myList.remove(111); //удаляет указазнный элемент
	cout << "Use remove:" << endl;
	PrintList(myList);

	cout << "Use assign:" << endl;
	myList.assign(5, 3); //очищает и заполняет лист указанными элементами
	PrintList(myList);

	//myList.clear(); //целиком очищает лист
	//myList.unique();
	//list<int>::iterator it = myList.begin();
	/*for (auto i = myList.begin(); i != myList.end(); i++)
	{
		cout << *i << endl;
	}*/
	//cout << *it << endl;
	return 0;
}