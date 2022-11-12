#include <bits/stdc++.h>
#include "participant.h"
#include "student.h"

//constructors
Participant::Participant(string name, int s_id, string c_name) : Student(name, s_id, c_name) {}
Participant:: Participant(Student s) : Student(s.getName(), s.getID(), s.getCollege()) {}

//getters
int Participant::getQueryDept()
{
    return q_dept_id;
}

string Participant::getQueryQuestion()
{
    return question;
}

int Participant::getEvent()
{
    return event_id;
}

//setters
void Participant::addEvent(int id)
{
    event_id =id;
}

void Participant::setQueryDetails(int id, string ques)
{
    q_dept_id = id;
    question = ques;
}
