#pragma once
#include <iostream>
#include <string>
#include <vector>


using namespace std;

struct StudentGrade
{
	string name;
	char grade;
};
class GradeMap
{

	
public:
vector<StudentGrade> m_map;
	GradeMap()
	{ }

	char& operator[](const string& name);
};