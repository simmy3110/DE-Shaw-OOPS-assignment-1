#include "student.h"
#include "person.h"
using namespace std;

// constructors
Student::Student(string student_name, int age, int student_id, string college_name):Person(student_name, age){
	id = student_id;
	college = college_name;
}
Student:: Student(string student_name, int student_id, string college_name): Person(student_name, 0){
	id = student_id;
	college = college_name;
}

// getters
int Student::getID(){
	return id;
}

string Student::getCollege(){
	return college;
}
