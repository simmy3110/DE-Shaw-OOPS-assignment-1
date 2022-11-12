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
	CoreMember cm1("Core-1", 1, "ABC", 1, 1);
	CoreMember cm2("Core-2", 2, "ABC", 2, 3);

	Coordinator c1("Coordinator-1", 3, "ABC", 4, 3);
	
	Workforce w1("Workforce-1", 4, "ABC", 3, 3, 4);
	Workforce w2("Workforce-2", 5, "ABC", 5, 3, 4);

	cm1.add_subordinate(3);
	c1.add_subordinate(5);

	w1.assign_event(21);
	w2.assign_event(33);

	cout << "The event handled by " << w1.getName() << "is "<<  w1.get_event() << "\n";

	Participant p1("Participant-1", 31, "DEF");
	p1.addEvent(21);

	vector<int> event_ids = c1.get_events();
	
	cout << "The events under the coordinator " << c1.getName() << " are the following\n";  
	for(auto x: event_ids){
		cout << "Event ID = "<< x << "\n";
	}

	cout << "The workforce members working under " << c1.getName() << " are\n";
	for(auto x: c1.get_subordinates()){
		cout << "Member ID = " << x << "\n";
	}

	p1.setQueryDetails(21, "What is the timing of the event?");

	cout << "The participant " << p1.getName() << " from " << p1.getCollege() << " college has the following query, from the dept "<< p1.getQueryDept() <<"\n";
	cout << p1.getQueryQuestion() << "\n";

	cout << "The workforce member with member ID = " << Events::get_member_id(p1.getEvent()) << " handles the event " << p1.getEvent() << " under the guidance of the coordinator with member ID = "<< w1.get_superior() << "\n"; 
	return 0;
}
