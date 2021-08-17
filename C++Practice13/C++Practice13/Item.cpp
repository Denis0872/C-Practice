
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
class Item
{
private:
	string title;
	double price;
	
public:
	virtual void getdata()
	{
		cout << "\n������� ���������  :";
		cin >> title;
		cout << "������� ����  :" ;
		cin >> price;
	}
	virtual void putdata()
	{
		cout << "\n���������   :"  << title;
		cout << "\n����  :" << price;
	}
};
class Paperbook : public Item
{
private:
	int pages;
public:
	void getdata()
	{
		Item::getdata();
		cout << "������� ����� ������� :" ;
		cin >> pages;
	}
	
		void putdata()
	{
		Item::putdata();
		cout << "\n�������:" << pages;
	}
};
class AudioBook : public Item
{
private:
	double time;
public:
	void getdata()
	{
		Item::getdata();
		cout << "������� ����� �������� :" ;
		cin >> time;
	}
	void putdata()
	{
		Item::putdata();
		cout << "\n����� �������� :"  << time;
	}
};