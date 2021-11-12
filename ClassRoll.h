#include <string>
#include <iostream>

//Author:Robin Hilliker
//This is a header file that defines a class of structs
using namespace std;


const int SIZE =25;

struct StudentRec
{
	string studentName;
	int assignmentTotal;
	int testTotal;
	char letterGrade;

};

class ClassRoll
{
public:
	void showGrade(string /*studentName*/) const; //receives student name 
	void writeStudents(ostream&); // Output file stream in received 
	int getNoStudents() { return noStudents; } //Returns number of students in array
	void changeGrade(string/*studentName*/, char/*letterGrade*/); // Students name and grade is passed
	ClassRoll(string /*file name*/,int /*Max number of students*/);
private:

	StudentRec students[SIZE];
	int maxStudents;
	int noStudents;
	int searchStudent(string /*studentName*/); // Receives student name from array,returns position
};