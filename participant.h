#ifndef PARTICIPANT
#define PARTICIPANT

#include<bits/stdc++.h>
#include "student.h"
using namespace std;
class Participant: public Student
{
    private:
        int event_id;
        //query details
        int q_dept_id;
        string question;
        
    public:
        //constructors
        Participant(string name, int s_id, string c_name);
        Participant(Student s);

        //getters
        int getQueryDept();
        string getQueryQuestion();
        int getEvent();

        //setters
        void addEvent(int id);
        void setQueryDetails(int id, string ques);
};

#endif