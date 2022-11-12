#ifndef WORKFORCE
#define WORKFORCE

#include "team_member.h"
using namespace std;

class Workforce: public TeamMember{
	private:
		int event_id;
	public:
		Workforce(string student_name, int student_id, string college_name, int member_id, int dept_id, int superior, int event_id);
		Workforce(string student_name, int student_id, string college_name, int member_id, int dept_id, int superior);

		void assign_event(int event_id);
};

#endif