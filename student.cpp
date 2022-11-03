#include "student.h"

using namespace std;

Student::Student(string s_name, int s_id, string c_name){
	name = s_name;
	id = s_id;
	College_Name = c_name;
}
void Student::getDetails(){
	cout << "Student Name: " << name << endl;
	cout << "Student ID: " << id << endl;
	cout << "College Name: " << College_Name << endl;
}

string Student::getName(){
	return name;
}

int Student::getID(){
	return id;
}

string Student::getCollege(){
	return College_Name;
}
