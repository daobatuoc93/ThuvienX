#include "NguoiLon.h"

void NguoiLon::Input()
{
	DocGia::Input();
	cout << "CMND";
	cin.ignore();
	cin >> CMND;

}

void NguoiLon::OutPut()
{
	DocGia::OutPut();
	cout << "\nCMND" << CMND << endl;
}

float NguoiLon::charge()
{
	return numValidDate*10000;
}
NguoiLon::NguoiLon()
{
}


NguoiLon::~NguoiLon()
{
}