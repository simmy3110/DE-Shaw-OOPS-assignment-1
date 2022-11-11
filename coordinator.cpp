#include<bits/stdc++.h>
#include "coordinator.h";
#include "student.h";
using namespace std;
// with core id
Coordinator:: Coordinator(int core, int coordinate, string s_name, int s_id, string c_name) : Student(s_name, s_id, c_name)
{
    core_id = core;
    coord_id = coordinate;
}
// wihtout core id
Coordinator:: Coordinator(int coordinate, string s_name, int s_id, string c_name) : Student(s_name, s_id, c_name)
{
    coord_id = coordinate;
}
void Coordinator:: add_work_force(int id)
{
    work_id.emplace_back(id);
}

int Coordinator:: getcore_id()
{
    return core_id;
}

int Coordinator:: getcoordinator_id()
{
    return coord_id;
}

void Coordinator:: assign_core_member(int core)
{
    core_id = core;
}