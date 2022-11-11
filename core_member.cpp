#include <bits/stdc++.h>
#include "core_member.h"
#include "student.h"
using namespace std;

// constructors
CoreMember::CoreMember(int dept, int core_ID, string s_name, int s_id, string c_name) : Student(s_name, s_id, c_name)
{
    core_id = core_ID;
    dept_id = dept;
}
CoreMember::CoreMember(int dept, string s_name, int s_id, string c_name) : Student(s_name, s_id, c_name)
{
    dept_id = dept;
}

// getters
int CoreMember:: getcore_id()
{
    return core_id;
}

int CoreMember:: getdept_id()
{
    return dept_id;
}

// setters
void CoreMember::add_coordinator(int id)
{
    coord_id.push_back(id);
}

