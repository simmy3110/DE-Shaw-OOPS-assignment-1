#include <iostream>
#include "student.h"
#include "team_member.h"

// constructor
TeamMember::TeamMember(string name, int student_id, string college, int member_ID, int dept_ID) : Student(name, student_id, college)
{
    member_id = member_ID;
    dept_id = dept_ID;
    subordinates = {};
    superior_id = NULL;
}
TeamMember:: TeamMember(string name, int student_id, string college_name, int member_ID, int dept_ID, int superior_ID, vector<int>subordinates_): Student(name, student_id, college_name){
    member_id = member_ID;
    dept_id = dept_ID;
    subordinates = subordinates_;
    superior_id = superior_ID;
}
TeamMember:: TeamMember(string name, int student_id, string college_name, int member_ID, int dept_ID, vector<int>subordinates_): Student(name, student_id, college_name){
    member_id = member_ID;
    dept_id = dept_ID;
    subordinates = {};
    superior_id = NULL;
}
TeamMember:: TeamMember(string name, int student_id, string college_name, int member_ID, int dept_ID, int superior_ID): Student(name, student_id, college_name){
    member_id = member_ID;
    dept_id = dept_ID;
    subordinates = {};
    superior_id = superior_ID;
}




// getters
int TeamMember:: get_dept_id(){
    return dept_id;
}
int TeamMember:: get_member_id(){
    return member_id;
}
vector<int> TeamMember:: get_subordinates(){
    return subordinates;
}
int TeamMember:: get_superior(){
    return superior_id;
}

// setter
void TeamMember:: add_subordinate(int sub){
    subordinates.push_back(sub);
}
void TeamMember:: assign_superior(int sup){
    superior_id = sup;
}

