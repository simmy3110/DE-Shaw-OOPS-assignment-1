#include <bits/stdc++.h>
#include "participant.h";

Participant:: void addEvent(int id)
{
    event_ids.push_back(id);
}
Participant::vector<int> getEvents()
{
    return event_ids;
}
Participant::void setQueryDetails(int id, string ques)
{
    q_dept_id = id;
    question = ques;
}
Participant::int getQueryDept()
{
    return q_dept_id;
}
Participant::string getQueryQuestion()
{
    return question;
}