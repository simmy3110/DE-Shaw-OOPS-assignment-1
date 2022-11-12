#include <iostream>
#include "events.h"
using namespace std;

void Events::add_event(int event_id, int member_id){
    mapEvents[member_id] = event_id;
};
int Events::get_event_id(int member_id){
    return mapEvents[member_id];
};