#include<bits/stdc++.h>
#include<student.h>
using namespace std;
class Participant: public Student
{
private:
	vector<int> event_ids;
        //query details
        int q_dept_id;
        string question;
    public:
        Participant(string name, int s_id, string c_name):Student(name, s_id, c_name){}
        Participant(Student s):Student(s.getName(), s.getID(), s.getCollege()){}
        void addEvent(int id);
        vector<int> getEvents();
        void setQueryDetails(int id, string ques);
        int getQueryDept();
        string getQueryQuestion();
};
