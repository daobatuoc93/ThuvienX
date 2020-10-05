#include "Children.h"

void Children::Input()
{
	Reader::Input();
	cout << "rep person:";
	cin.ignore();
	cin >> rep_person;
}

void Children::OutPut()
{
	Reader::OutPut();
	cout << "\nRepPerson" << rep_person << endl;
}

float Children::charge()
{
	return numValidDate * 5000;
}
Children::Children()
{
}


Children::~Children()
{
}