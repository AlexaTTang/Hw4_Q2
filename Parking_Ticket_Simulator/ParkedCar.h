#ifndef PARKEDCAR
#define PARKEDCAR
#include <iostream>
#include <string>
using namespace std;
class ParkedCar
{
	//private member variables of class ParkedCar
private:
	string make;
	string model;
	string color;
	int licenseNumber;
	int minutesParked;

	//public member functions of class ParkedCar
public:
	//ParkedCar class constructor
	//assigns arguements to respective member variables
	ParkedCar(string cMake, string cModel, string cColor, int lN, int mP)
	{
		cMake = make;
		cModel = model;
		cColor = color;
		lN = licenseNumber;
		mP = minutesParked;
	}

	//comment shortcut = ctrl k+c
	//uncomment shortcut = ctrl k+u
	
	////setters 
	//void setMake(string cmake)
	//{
	//	cmake = make;
	//}
	//void setModel(string cmodel)
	//{
	//	cmodel = model;
	//}
	//void setColor(string ccolor)
	//{
	//	ccolor = color;
	//}
	//void setLicenseNumber(int Ln)
	//{
	//	Ln = licenseNumber;
	//}
	

	//void setTimeParked(int Tp)

	//getters
	string getMake();
	string getModel();
	string getColor();
	int getLicenseNumber();
	//int getTimeParked();
};
#endif

