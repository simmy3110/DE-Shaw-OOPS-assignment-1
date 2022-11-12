#include<iostream>
using namespace std;

class Events{
    private:
        static map<int, int> mapEvents;
    public:
        static void add_event(int event_id, int member_id);
        static int get_event_id(int member_id);
};