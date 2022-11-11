#include<bits/stdc++.h>
#include "coordinator.h"
#include "events.h"
#include "team_member.h"
#include "student.h"
using namespace std;

Coordinator:: Coordinator(string student_name, int student_id, string college_name, int member_id, int dept_id, int superior, vector<int> subordinates): TeamMember(student_name, student_id, college_name, member_id, dept_id, superior, subordinates){};
Coordinator:: Coordinator(string student_name, int student_id, string college_name, int member_id, int dept_id):TeamMember(student_name, student_id, college_name, member_id, dept_id){};

vector<int> Coordinator:: get_events(){
    // vector<int> events;
    // for(auto x: subordinates){
    //     events.push_back(p.get_events());
    // }
    // return events;
}
