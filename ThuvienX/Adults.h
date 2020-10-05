#pragma once
#include"Reader.h"
class Adults:public Reader
{
public:
	void Input();
	void OutPut();
	float charge();
	Adults();
	~Adults();
private:
	string CMND;
};

