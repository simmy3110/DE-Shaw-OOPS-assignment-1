#include<bits/stdc++.h>
#include "workforce.h"
#include "events.h"
#include "coordinator.h"
#include "team_member.h"
#include "core_member.h"
#include "person.h"
#include "student.h"
#include "participant.h"

#include "workforce.cpp"
#include "events.cpp"
#include "coordinator.cpp"
#include "team_member.cpp"
#include "core_member.cpp"
#include "person.cpp"
#include "student.cpp"
#include "participant.cpp"
using namespace std;


int main()
{
	string name = "Shivangi";
	// int age = 25;
	// Person p(name, age);
	// cout << p.getAge() << endl;
	string college = "IITBHU";
	Workforce w = Workforce(name, 123, college, 456, 1, 2);
	w.assign_event(3);
	int mem = Events:: get_event_id(456);
	cout << mem << endl;
	//Workforce(string student_name, int student_id, string college_name, int member_id, int dept_id, int superior);
	return 0;
}
