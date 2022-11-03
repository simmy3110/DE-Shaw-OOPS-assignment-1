// this constructor will take in a few more details after the student class is designed
#include "workforce.h"
Workforce::Workforce(Coordinator coord, string name, int s_id, string c_name):Student(name, s_id, c_name){
    this.coord = coord; 
}
Workforce::Workforce(string name, int s_id, string c_name):Student(name, s_id, c_name){
    ;
}

Workforce::Workforce(Coordinator coord, Student s):Student(s.getName(), s.getID(), s.getCollege()){
    this.coord = coord; 
}

Workforce::Workforce(Student s):Student(s.getName(), s.getID(), s.getCollege()){
    ;
}

Workforce::assignCoordinator(Coordinator coord){
    coord_id = coord;
}

Workforce::getCoordinator(){
    return coord;
}
