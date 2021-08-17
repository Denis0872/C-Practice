#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;
class teacher : public human
{
private:
	unsigned int work_time;
public:
	teacher(string last_name, string name, string second_name, unsigned int work_time) : human(last_name, name, second_name)
	{
		this->work_time = work_time;
	}

	string get_full_info()
	{
		ostringstream full_info;
		full_info << human::get_full_info()<< "  " << "Количество часов: " << work_time << endl;
		return full_info.str();
	}
};