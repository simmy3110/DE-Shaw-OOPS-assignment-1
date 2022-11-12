#ifndef COORDINATOR
#define COORDINATOR

#include <bits/stdc++.h>
#include "student.h"
#include "team_member.h"

class Coordinator : public TeamMember
{
public:
	Coordinator(string student_name, int student_id, string college_name, int member_id, int dept_id, int superior, vector<int> subordinates);
	Coordinator(string student_name, int student_id, string college_name, int member_id, int dept_id);

	vector<int> get_events();
};

#endif