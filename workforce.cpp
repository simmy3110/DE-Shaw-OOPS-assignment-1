#include "workforce.h"
#include "team_member.h"
#include "events.h"
Workforce:: Workforce(string student_name, int student_id, string college_name, int member_id, int dept_id, int superior, int event_ID):TeamMember(student_name, student_id, college_name, member_id, dept_id, superior){
    event_id = event_ID;
    Events::add_event(event_ID, get_member_id());
};
Workforce:: Workforce(string student_name, int student_id, string college_name, int member_id, int dept_id, int superior):TeamMember(student_name, student_id, college_name, member_id, dept_id, superior){};

void Workforce:: assign_event(int event_ID){
    event_id = event_ID;
    Events::add_event(event_ID, get_member_id());
}
int Workforce:: get_event(){
    return event_id;
}