 #include<bits/stdc++.h>
 #include<core_member.h>

 CoreMember::CoreMember(int dept, int core_ID, string s_name, int s_id, string c_name) : Student(name, id, college_n)
    {
        core_id = core_ID;
        dept_id = dept;
    }
    CoreMember::CoreMember(int dept, string s_name, int s_id, string c_name) : Student(name, id, college_n)
    {
        dept_id = dept;
    }
    CoreMember::void add_coordinator(int id)
    {
        coord_id.push_back(id);
    }

    CoreMember::int getcore_id()
    {
        return core_id;
    }

    CoreMember::int getdept_id()
    {
        return dept_id;
    }