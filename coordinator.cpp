#include<bits/stdc++.h>
#include "coordinator.h"
#include "events.h"
#include "team_member.h"
#include "student.h"
#include "events.h"
using namespace std;

Coordinator:: Coordinator(string student_name, int student_id, string college_name, int member_id, int dept_id, int superior, vector<int> subordinates): TeamMember(student_name, student_id, college_name, member_id, dept_id, superior, subordinates){};
Coordinator:: Coordinator(string student_name, int student_id, string college_name, int member_id, int dept_id):TeamMember(student_name, student_id, college_name, member_id, dept_id){};

vector<int> Coordinator:: get_events(){
    vector<int> event_ids;
    vector<int> subordinates = get_subordinates();
    for(auto x: subordinates){
        int id = Events:: get_event_id(x);
        event_ids.push_back(id);
    }
    return event_ids;
}
