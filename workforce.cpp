// this constructor will take in a few more details after the student class is designed
#include "workforce.h"
// Workforce::Workforce(Coordinator *coord, string name, int s_id, string c_name):Student(name, s_id, c_name){
//     this.coord = coord; 
// }
// Workforce::Workforce(string name, int s_id, string c_name):Student(name, s_id, c_name){
//     ;
// }

// Workforce::Workforce(Coordinator *coord, Student s):Student(s.getName(), s.getID(), s.getCollege()){
//     this.coord = coord; 
// }

// Workforce::Workforce(Student s):Student(s.getName(), s.getID(), s.getCollege()){
//     ;
// }

// void Workforce::assignCoordinator(Coordinator *coord){
//     coord_id = coord;
// }

// Coordinator Workforce::getCoordinator(){
//     return *coord;
// }

Workforce:: Workforce(string student_name, int student_id, string college_name, int member_id, int dept_id, int superior, int event_ID):TeamMember(student_name, student_id, college_name, member_id, dept_id, superior){
    event_id = event_ID;
};
Workforce:: Workforce(string student_name, int student_id, string college_name, int member_id, int dept_id, int superior):TeamMember(student_name, student_id, college_name, member_id, dept_id, superior){};
void Workforce:: add_event(int event_ID){
    event_id = event_ID;
}