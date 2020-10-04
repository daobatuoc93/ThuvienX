#pragma once
#include"DocGia.h"
class NguoiLon:public DocGia
{
public:
	void Input();
	void OutPut();
	float charge();
	NguoiLon();
	~NguoiLon();
private:
	string CMND;
};

