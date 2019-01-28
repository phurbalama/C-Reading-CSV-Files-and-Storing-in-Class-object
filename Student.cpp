#include "stdafx.h"
#include <iostream>
#include "Student.h"
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip> //iomanip is a library that is used to manipulate the output of C++ program


using namespace std;
//constructor for the Student class which will store all the private variable.
Student::Student(string a, string b, string c, string d, string e, string f, string g, string h, string i, string j, string k, string l)
{
	this->Fname = a;
	this->Lname = b;
	this->ID = c;
	this->Email = d;
	this->Street = e;
	this->City = f;
	this->State = g;
	this->Zip = h;
	this->Telephone = i;
	this->Exam1 = j;
	this->Exam2 = k;
	this->Exam3 = l;

}
//construtor 
Student::Student()
{
	this->Fname = " ";
	this->Lname = " ";
	this->ID = " ";
	this->Email = " ";
	this->Street = " ";
	this->City = " ";
	this->State = " ";
	this->Zip = " ";
	this->Telephone = " ";
	this->Exam1 = " ";
	this->Exam2 = " ";
	this->Exam3 = " ";
	

}
void Student::input_user()
{
	cout << "Enter your First Name" << endl;
	cin >> Fname;
	cout << "Enter your Last Name " << endl;
	cin >> Lname;
	cout << "Enter you ID" << endl;
	cin >> ID;
	cout << "Enter your Email" << endl;
	cin >> Email;
	cout << "Enter your Street" << endl;
	cin >> Street;
	cout << "Enter your City" << endl;
	cin >> City;
	cout << "Enter your Zip " << endl;
	cin >> Zip;
	cout << "Enter your Telephone " << endl;
	cin >> Telephone;
	cout << "Enter your Exam 1 " << endl;
	cin >> Exam1;
	cout << "Enter your Exam 2" << endl;
	cin >> Exam2;
	cout << "Enter your Exam 3" << endl;
	cin >> Exam3;
}

void Student::output() 
//output function which will align all the string variable to the left and the width 
{
	

	cout << left << setw(12) << Fname
		<< setw(10) << Lname
		<< setw(12) << ID
		<< setw(30) << Email
		<< setw(20) << Street
		<< setw(12) << City
		<< setw(6) << State
		<< setw(8) << Zip
		<< setw(15) << Telephone
		<< setw(6) << Exam1
		<< setw(6) << Exam2
		<< setw(6) << Exam3 << endl;
}


void output(Student record[], int& num)
{
	//function which will print the value stored in the variable, it takes in the object and size of object
	for (int i = 0; i< num - 1; i++) {
		record[i].output();

	}
}
int readfile(string& filename)
{
	int size = 0;
	string line;
	ifstream in;
	in.open(filename);
	if (in.fail())//if the file fails to open it outputs error message
	{
		cerr << "The file could not be opened \n";
		cerr << "The Path was not found. \n";
		system("pause");

	}
	else
	{

		while (!in.eof())
		{


			getline(in, line);
			size++; //creating count for each line in the text file
		}

	}

	return size;

}


Student send(string& filename, int& recCount)
{

	int i = 0;
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
	string line;

	ifstream in;
	in.open(filename); //opening file path



	while (getline(in, line) && in.good() && i<recCount)
	{
		istringstream ss(line);

		getline(ss, Fname, ',');
		getline(ss, Lname, ',');
		getline(ss, ID, ',');
		getline(ss, Email, ',');
		getline(ss, Street, ',');
		getline(ss, City, ',');
		getline(ss, State, ',');
		getline(ss, Zip, ',');
		getline(ss, Telephone, ',');
		getline(ss, Exam1, ',');
		getline(ss, Exam2, ',');
		getline(ss, Exam3, ',');

		
		i++;	
	}
	in.close();

	return Student(Fname, Lname, ID, Email, Street, City, State, Zip, Telephone, Exam1, Exam2, Exam3);
}
