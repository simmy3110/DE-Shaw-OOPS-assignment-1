#include<bits/stdc++.h>
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

class Participant
{
private:
	vector<int> event_id;
        //query details
        int dept_id;
        string question;
    public:
        Participant(string name, int s_id, string c_name):Student(name, s_id, c_name){}
        Participant(Student s):Student(s.getName(), s.getID(), s.getCollege()){}

        void addEvent(int id){
            event_id.push_back(id);
        }
        void getEvents(){
            cout << "The IDs of the events you are participating in are:\n";
            for(int i : event_id)
                cout << i << " ";
            cout << endl;
        }
        void setQueryDetails(int id, string ques){
            dept_id = id;
            question = ques;
        }
        void getQueryDetails(){
            cout << "Department ID: " << dept_id << endl;
            cout << "Question: " << question <<endl;
        }

};

class CoreMember
{

};

class Coordinator: public Student {
private:
	 int core_id;
	 int coord_id;
	 vector<int> work_id;
 public:
	 //with core id
	 Coordinator(int core, int coordinate, string s_name, int s_id, string c_name):Student(name, id, college_n)
	 {
		core_id= core;
		coord_id= coordinate;
	 }
	 //wihtout core id
	 Coordinator(int coordinate, string s_name, int s_id, string c_name):Student(name, id, college_n)
	 {
		coord_id= coordinate;
	 }
	 void add_work_force(int id)
	 {
		work_id.emplace_back(id);
	 }

	 int getcore_id()
	 { return core_id; }

	 int getcoordinator_id()
	 { return coord_id; }

	 void assign_core_member(int core){
			core_id = core;
		}
};

class Workforce: public Student{
private:
	Coordinator coord_id;
public:
	// this constructor will take in a few more details after the student class is designed
	Workforce(Coordinator coord, string name, int s_id, string c_name):Student(name, s_id, c_name){
		coord_id = coord; 
	}
	Workforce(string name, int s_id, string c_name):Student(name, s_id, c_name){
		;
	}

	Workforce(Coordinator coord, Student s):Student(s.getName(), s.getID(), s.getCollege()){
		coord_id = coord; 
	}

	Workforce(Student s):Student(s.getName(), s.getID(), s.getCollege()){
		;
	}
	void assign_coordinator(Coordinator coord){
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
