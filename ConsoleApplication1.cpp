// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include "Student.h"
#include <string>


using namespace std;


int main()

{
	string filename = "C:\\Users\\class.CST\\Downloads\\inputData.csv";
	int size = readfile(filename); //readfile function reads the file and returns size of the file
	
	Student record[50]; // creating pointer array for Payroll class;
	//record = new Student[size];//creating dynamic array

	int recCount = 1;
	for (int i = 0; i < size; i++)
	{
		record[i] = send(filename, recCount);
		recCount++;

	}
	char con;
	int a;
	do {


		cout << "Select your Option \n1. Display the file \n2. Exit" << endl;
		cin >> a;
		if (a == 1)
		{
			output(record, size);
		}
		else if (a == 2)
		{
			return 0;
		}
		cout << "Would you like to continue?\n";
		cin >> con;
	} while (con == 'y' || con == 'Y');
	

	system("pause");
	return 0;
}