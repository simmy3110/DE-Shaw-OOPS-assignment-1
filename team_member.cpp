#include <iostream>
#include "student.h"
#include "team_member.h"

TeamMember::TeamMember(string name, int student_id, string college, int member_ID, int dept_ID) : Student(name, student_id, college)
{
    member_id = member_ID;
    dept_id = dept_ID;
};

int TeamMember:: get_dept_id(){
    return dept_id;
};
int TeamMember:: get_member_id(){
    return member_id;
};
vector<int> TeamMember:: get_subordinates(){
    return subordinates;
};

void TeamMember:: addSubordinate(int sub){
    subordinates.push_back(sub);
}

