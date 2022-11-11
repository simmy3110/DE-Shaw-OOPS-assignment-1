#ifndef WORKFORCE
#define WORKFORCE

#include "coordinator.h"
#include "team_member.h"
using namespace std;

// class Workforce: public Student{
// private:
// 	Coordinator coord;
// public:
// 	// this constructor will take in a few more details after the student class is designed
// 	Workforce(Coordinator coord, string name, int s_id, string c_name):Student(name, s_id, c_name);
// 	Workforce(string name, int s_id, string c_name):Student(name, s_id, c_name);

// 	Workforce(Coordinator coord, Student s):Student(s.getName(), s.getID(), s.getCollege());
// 	Workforce(Student s):Student(s.getName(), s.getID(), s.getCollege());
// 	void assignCoordinator(Coordinator coord);
// 	Coordinator getCoordinator();
	
// };

class Workforce: public TeamMember{
	private:
		int event_id;
	public:
		Workforce(string student_name, int student_id, string college_name, int member_id, int dept_id, int superior, int event_id);
		Workforce(string student_name, int student_id, string college_name, int member_id, int dept_id, int superior);

		void add_event(int event_id);
};

#endif