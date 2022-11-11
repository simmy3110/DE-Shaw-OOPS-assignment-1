#include<iostream>
#include "person.h"
using namespace std;

Person:: Person(string p_name, int p_age){
    name = p_name;
    age = p_age;
}

int Person:: getAge(){
    return age;
}
string Person:: getName(){
    return name;
}