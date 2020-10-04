#include "TreEm.h"

void TreEm::Input()
{
	DocGia::Input();
	cout << "rep person:";
	cin.ignore();
	cin >> rep_person;
}

void TreEm::OutPut()
{
	DocGia::OutPut();
	cout << "\nRepPerson" << rep_person << endl;
}

float TreEm::charge()
{
	return numValidDate * 5000;
}
TreEm::TreEm()
{
}


TreEm::~TreEm()
{
}