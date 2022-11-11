#ifndef CORE_MEMBER
#define CORE_MEMBER

#include "student.h"
#include "coordinator.h"
using namespace std;

class CoreMember : public Student
{
private:
    vector<int> coord_id;
    int core_id;
    int dept_id;

public:
    // constructors
    CoreMember(int dept, int core_ID, string s_name, int s_id, string c_name);
    CoreMember(int dept, string s_name, int s_id, string c_name);

    // getters
    int getcore_id();
    int getdept_id();
    vector<int> getCoordinators;
    
    //setters
    void add_coordinator(int id);
   
};
#endif