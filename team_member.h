#ifndef TEAM
#define TEAM

#include<bits/stdc++.h>
#include "student.h"
using namespace std;

class TeamMember : public Student
{
private:
	int member_id;
    int dept_id;
    vector<int> subordinates;

public:
	TeamMember(string name, int student_id, string college_name, int member_id, int dept_id);

    int get_dept_id();
    int get_member_id();
    vector<int> get_subordinates();

    void addSubordinate(int sub);
};

#endif