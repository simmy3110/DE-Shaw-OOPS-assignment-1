#include <iostream>
#include<map>
#include "events.h"
using namespace std;

map<int,int> Events:: mapEvents;

void Events::add_event(int event_id, int member_id){
    //map<int, int> map_events = get_events_map();
    mapEvents[member_id] = event_id;
}
int Events::get_event_id(int member_id){
    //return 1;
   return Events::mapEvents[member_id];
}