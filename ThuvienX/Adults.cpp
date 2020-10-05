#include "Adults.h"

void Adults::Input()
{
	Reader::Input();
	cout << "CMND";
	cin.ignore();
	cin >> CMND;

}

void Adults::OutPut()
{
	Reader::OutPut();
	cout << "\nCMND" << CMND << endl;
}

float Adults::charge()
{
	return numValidDate*10000;
}
Adults::Adults()
{
}


Adults::~Adults()
{
}