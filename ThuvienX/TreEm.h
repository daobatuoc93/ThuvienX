#pragma once
#include"DocGia.h"
class TreEm:public DocGia
{
public:
	void Input();
	void OutPut();
	float charge();
	TreEm();
	~TreEm();

private:
	string rep_person;
};

