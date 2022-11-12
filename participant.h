#include<bits/stdc++.h>
#include "student.h"
using namespace std;
class Participant: public Student
{
    private:
	    vector<int> event_ids;

        //query details
        int q_dept_id;
        string question;
        
    public:
        //constructors
        Participant(string name, int s_id, string c_name):Student(name, s_id, c_name){}
        Participant(Student s):Student(s.getName(), s.getID(), s.getCollege()){}

        //getters
        int getQueryDept();
        string getQueryQuestion();
        vector<int> getEvents();

        //setters
        void addEvent(int id);
        void setQueryDetails(int id, string ques);
};
