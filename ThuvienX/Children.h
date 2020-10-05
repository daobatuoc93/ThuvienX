#pragma once
#include"Reader.h"
class Children :public Reader
{
public:
	void Input();
	void OutPut();
	float charge();
	Children();
	~Children();

private:
	string rep_person;
};

