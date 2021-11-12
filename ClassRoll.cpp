#include "Classroll.h"
#include <iomanip>
#include <fstream>



ClassRoll::ClassRoll(string fileName, int newMaxStudents)
{
	maxStudents = newMaxStudents;

	ifstream fin(fileName);
	if (!fin.is_open())
	{
		cout << "error opening student.data file ";
		system("pause");
		exit(-1);
	}
	int length = 0;
	for (length = 0; length < SIZE; length++)
	{

		getline(fin, students[length].studentName);
		if (fin.eof())
			break;
		fin >> students[length].assignmentTotal;
		fin >> students[length].testTotal;
		fin >> students[length].letterGrade;
		fin.ignore(80, '\n');
	}
	noStudents = length;
	
}

void ClassRoll::writeStudents(ostream& output)

{
	//Make this pretty
		for (int ctr = 0; ctr < noStudents; ctr++)
		{
			output << left << setw(30) << students[ctr].studentName << setw(20) << right
				<< students[ctr].assignmentTotal
				<< setw(20) << right << students[ctr].testTotal
				<< setw(20) << students[ctr].letterGrade << endl;



		}


}