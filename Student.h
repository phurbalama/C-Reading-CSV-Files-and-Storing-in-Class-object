#include <iostream>
#include "stdafx.h"

using namespace std;

class Student
{

private:
	string Fname;
	string Lname;
	string ID;
	string Email;
	string Street;
	string City;
	string State;
	string Zip;
	string Telephone;
	string Exam1;
	string Exam2;
	string Exam3;

public:
	Student();
	Student(string, string, string, string, string, string, string, string, string, string, string, string); //contstructor
	void output();
	void output1();
	void input_user(); //allow user to input values
};
void output(Student record[], int& num);
int readfile(string& filename);
Student send(string& filename, int& recCount);
