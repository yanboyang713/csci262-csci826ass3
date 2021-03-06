/*-------------------------------------------------------------
Student's Name: Boyang YAN
Student's email address: by932@uowmail.edu.au
Last Modification: 14/10/2016
-------------------------------------------------------------*/
#include <iostream>
#include "vehicle.h"
#include "time.h"
using namespace std;
vehicle::vehicle()// Constructor
{
	regisration = "";
	currentPosition = 0;
	currentSpeed = 0;
	parked = false;
	thisAction = "";
	previousAction = "";
}
vehicle::~vehicle()// Constructor
{
	regisration = "";
	currentPosition = 0;
	currentSpeed = 0;
	parked = false;
	thisAction = "";
	previousAction = "";
}
string vehicle::getRegisration() const
{
	return regisration;
}
float vehicle::getCurrentPosition() const
{
	return currentPosition;
}
float vehicle::getCurrentSpeed() const
{
	return currentSpeed;
}
bool vehicle::getParked() const
{
	return parked;
}
string vehicle::getThisAction() const
{
	return thisAction;
}
string vehicle::getPreviousAction() const
{
	return previousAction;
}
string vehicle::getType() const
{
	return type;
}
Time vehicle::getArriveTime() const
{
	return arriveTime;
}
void vehicle::setRegisration(string regisration)
{
	this->regisration = regisration;
	return;
}
void vehicle::setCurrentPosition(float currentPosition)
{
	this->currentPosition = currentPosition;
	return;
}
void vehicle::setCurrentSpeed(float currentSpeed)
{
	this->currentSpeed = currentSpeed;
	return;
}
void vehicle::setParked(bool parked)
{
	this->parked = parked;
	return;
}
void vehicle::setThisAction(string thisAction)
{
	this->thisAction = thisAction;
	return;
}
void vehicle::setPreviousAction(string previousAction)
{
	this->previousAction = previousAction;
	return;
}
void vehicle::setType(string type)
{
	this->type = type;
	return;
}
void vehicle::setArriveTime(Time arriveTime)
{
	this->arriveTime = arriveTime;
	return;
}
void vehicle::setArriveTimeMin(int min)
{
	this->arriveTime.setMin(min);
	return;
}
bool vehicle::operator< (const vehicle& rhs)
{
	if (type < rhs.type)
		return true;
	return false;	
}
bool vehicle::operator == (const vehicle& rhs)
{
	if (rhs.regisration == regisration)
		return true;
		
	return false;
}
int vehicle::getArriveTimeHour() const
{
	return arriveTime.getHour();
}
int vehicle::getArriveTimeMin() const
{
	return arriveTime.getMin();
}
ostream& operator << (ostream& out, const vehicle& data)
{
	out << "Type: " << data.getType();
	out << " Arrive Hour: " << data.getArriveTimeHour();
        out << " Arrive Min: " << data.getArriveTimeMin();
	out << " Regisration: " << data.getRegisration();
	out << " Current Position: " << data.getCurrentPosition();
	out << " Current Speed: " << data.getCurrentSpeed();
	out << " Parked: " << data.getParked();
	out << " This Action: " << data.getThisAction();
	out << " Previous Action: " << data.getPreviousAction() << endl;
        return out;
}
