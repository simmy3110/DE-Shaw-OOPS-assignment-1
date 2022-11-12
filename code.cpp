#include<bits/stdc++.h>
#include "workforce.h"
#include "events.h"
#include "person.cpp"
using namespace std;


int main()
{
	string name = "Shivangi";
	int age = 25;
	Person p(name, age);
	cout << p.getAge() << endl;
	// string college = "IITBHU";
	// Workforce w = Workforce(name, 123, college, 456, 1, 2);
	// w.assign_event(3);
	// int mem = Events:: get_event_id(3);
	// cout << mem << endl;
	//Workforce(string student_name, int student_id, string college_name, int member_id, int dept_id, int superior);
	return 0;
}
