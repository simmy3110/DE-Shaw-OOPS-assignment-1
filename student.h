#ifndef STUDENT
#define STUDENT

#include<bits/stdc++.h>
using namespace std;

class Student
{
private:
	string name;
	int id;
	string College_Name;

public:
	Student(string s_name, int s_id, string c_name);
	void getDetails();
	string getName();
	int getID();
	string getCollege();
};

#endif