#ifndef PERSON
#define PERSON

#include<bits/stdc++.h>
using namespace std;

class Person
{
private:
	string name;
	int age;

public:
	Person(string name, int age);
	int getAge();
	string getName();
};

#endif