#ifndef WORKFORCE
#define WORKFORCE

#include "student.h"
#include "coordinator.h"
using namespace std;

class Workforce: public Student{
private:
	Coordinator coord;
public:
	// this constructor will take in a few more details after the student class is designed
	Workforce(Coordinator coord, string name, int s_id, string c_name):Student(name, s_id, c_name);
	Workforce(string name, int s_id, string c_name):Student(name, s_id, c_name);

	Workforce(Coordinator coord, Student s):Student(s.getName(), s.getID(), s.getCollege());
	Workforce(Student s):Student(s.getName(), s.getID(), s.getCollege());
	void assignCoordinator(Coordinator coord);
	Coordinator getCoordinator();
	
};
#endif