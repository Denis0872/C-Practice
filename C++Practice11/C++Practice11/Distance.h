#pragma once
#include <iostream>
using namespace std;

class Distance
{
friend void operator-( Distance&);
friend std::ostream& operator<< (std::ostream& out, const Distance& dist);
const float MTF;
private:
	int feet;
	float inches;
	
public:
	// ����������� �� ���������
	Distance() : feet(0), inches(0.0), MTF(3.280833F) { }
	// ����������� � ����� �����������
	Distance(int ft, float in) : feet(ft), inches(in), MTF(3.280833F) { }
	Distance(float meters) : MTF(3.280833F)
	{
		float fltfeet = MTF * meters; // ������� � ����
		feet = int(fltfeet); // ����� ������ �����
		inches = 12 * (fltfeet-feet); // ������� - ��� �����
	}
	operator float() const
	{
		float fracfeet = inches / 12;
		fracfeet += static_cast<float>(feet);
		return fracfeet / MTF;
	}
	void getdist()
	{
		cout << "\n������� ����� ����� :" ;
		cin >> feet;
		cout << "\n������� ����� ������ :" ;
		cin >> inches;
	}
	void showdist()
	{
		cout << feet << "\ -  "<< inches << "\n";
	}
	Distance operator+ (const Distance&) const;

	Distance  operator-(const Distance& d2) {
		int f = feet - d2.feet;
		float i = inches - d2.inches;
		if (i >= 12.0)
		{
			i -= 12.0;
			f++;
		}
		return Distance(f, i);
	}

	
};
