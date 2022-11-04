#include<bits/stdc++.h>
#include "coordinator.h"
#include "student.h"
#include "participant.h"
#include "core_member.h"

using namespace std;

class Student
{
private:
	string name;
	int id;
	string College_Name;

public:
	Student(string s_name, int s_id, string c_name): name(s_name), id(s_id), College_Name(c_name){
		;
	}
	void getDetails(){
		cout << "Student Name: " << name << endl;
  		cout << "Student ID: " << id << endl;
		cout << "College Name: " << College_Name << endl;
	}

	string getName(){
		return name;
	}

	int getID(){
		return id;
	}

	string getCollege(){
		return College_Name;
	}

};




class Workforce: public Student{
private:
	Coordinator *coord_id;
public:
	// this constructor will take in a few more details after the student class is designed
	Workforce(Coordinator *coord, string name, int s_id, string c_name):Student(name, s_id, c_name){
		coord_id = coord; 
	}
	Workforce(string name, int s_id, string c_name):Student(name, s_id, c_name){
		;
	}

	Workforce(Coordinator *coord, Student s):Student(s.getName(), s.getID(), s.getCollege()){
		coord_id = coord; 
	}

	Workforce(Student s):Student(s.getName(), s.getID(), s.getCollege()){
		;
	}
	void assign_coordinator(Coordinator *coord){
		coord_id = coord;
	}
	
};

int main()
{
	Student s("avantika", 1, "iiitb");
	Workforce w(s);
	w.getDetails();
	return 0;
}
