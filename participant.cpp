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

vector<int> Participant::getEvents()
{
    return event_ids;
}

//setters
void Participant::addEvent(int id)
{
    event_ids.push_back(id);
}

void Participant::setQueryDetails(int id, string ques)
{
    q_dept_id = id;
    question = ques;
}
