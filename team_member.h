#ifndef TEAM_MEMBER
#define TEAM_MEMBER

#include<bits/stdc++.h>
#include "student.h"
using namespace std;

class TeamMember : public Student
{
private:
    int dept_id;
    int member_id;
    int superior_id;
    vector<int> subordinates;

public:
	TeamMember(string name, int student_id, string college_name, int member_id, int dept_id);
    TeamMember(string name, int student_id, string college_name, int member_id, int dept_id, int superior_id, vector<int>subordinates);
    TeamMember(string name, int student_id, string college_name, int member_id, int dept_id, vector<int>subordinates_);
    TeamMember(string name, int student_id, string college_name, int member_id, int dept_id, int superior_ID);


    int get_dept_id();
    int get_member_id();
    vector<int> get_subordinates();
    int get_superior();

    void add_subordinate(int sub);
    void assign_superior(int sup);
};

#endif