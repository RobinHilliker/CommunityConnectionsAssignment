
#include "ClassRoll.h"


int main()
{
	//Default parameter this
	ClassRoll comp333("student.data", 10);
	



	cout << comp333.getNoStudents();
	comp333.writeStudents(cout);

}