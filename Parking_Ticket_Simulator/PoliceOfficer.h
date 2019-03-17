// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#ifndef POLICEOFFICER
#define POLICEOFFICER
#include <iostream>
#include <string>
using namespace std;

class PoliceOfficer
{
private:
	string officerName;
	int badgeNumber;
public: 
	//class constructor that accepts two arguments 
	//and sets them equal to respective member variables
	PoliceOfficer(string name, int number)
	{
		name = officerName;
		number = badgeNumber;
	}

};




#endif //PCH_H
