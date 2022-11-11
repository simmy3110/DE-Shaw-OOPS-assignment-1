#ifndef CORE_MEMBER
#define CORE_MEMBER

#include "team_member.h"
#include "coordinator.h"
using namespace std;

class CoreMember : public TeamMember
{

public:
    // constructors
    CoreMember(string student_name, int student_id, string college_name, int member_ID, int dept_ID);
    CoreMember(string student_name, int student_id, string college_name, int member_ID, int dept_ID, vector<int> subordinates_);
   
};
#endif