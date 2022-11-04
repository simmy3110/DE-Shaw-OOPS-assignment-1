#include<bits/stdc++.h>
#include "student.h"
class Coordinator: public Student {
private:
	 int core_id;
	 int coord_id;
	 vector<int> work_id;
 public:
 	 //with core id
	 Coordinator(int core, int coordinate, string s_name, int s_id, string c_name):Student(s_name, s_id, c_name){};
     //without core id
	 Coordinator(int coordinate, string s_name, int s_id, string c_name):Student(s_name, s_id, c_name){};
     void add_work_force(int id);
     int getcore_id();
     int getcoordinator_id();
     void assign_core_member(int core);
};
