#ifndef PARKINGMETER
#define PARKINGMETER
class ParkingMeter
{
private:
	static int timePurchased;
public:
	//class constructor that recieves the amount of time someone
	//purchased to park and assigns that value to variable time
	ParkingMeter(int time)
	{
		time = timePurchased;
	}

	//getter, returns the time purchased
	int getTimeParked()
	{
		return timePurchased;
	}
	

	friend class ParkedCar;
};
int ParkingMeter::timePurchased = 0;


#endif
