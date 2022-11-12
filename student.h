#include<bits/stdc++.h>
#include "person.h"
using namespace std;

class Student : public Person
{
private:
	int id;
	string college;

public:
	Student(string name, int student_id, string college);
	Student(string name, int age, int student_id, string college);

	// getters
	int getID();
	string getCollege();
};

