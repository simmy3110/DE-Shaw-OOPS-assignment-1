#include <bits/stdc++.h>
#include "core_member.h"
#include "team_member.h"
using namespace std;

// constructors
CoreMember:: CoreMember(string student_name, int student_id, string college_name, int member_ID, int dept_ID): TeamMember(student_name, student_id, college_name, member_ID, dept_ID){}
CoreMember:: CoreMember(string student_name, int student_id, string college_name, int member_ID, int dept_ID, vector<int> subordinates_): TeamMember(student_name, student_id, college_name, member_ID, dept_ID, NULL, subordinates_){}

