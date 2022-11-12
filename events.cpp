#include <iostream>
#include<map>
#include "events.h"
using namespace std;

map<int,int> Events:: mapEvents;
map<int,int> Events:: mapMembers;

void Events::add_event(int event_id, int member_id){
    mapEvents[member_id] = event_id;
    mapMembers[event_id] = member_id;
}
int Events::get_event_id(int member_id){
   return Events::mapEvents[member_id];
}
int Events::get_member_id(int event_id){
   return Events::mapMembers[event_id];
}