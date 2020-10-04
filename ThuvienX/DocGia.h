#pragma once
#include<iostream>
#include <string>
using namespace std;

class DocGia
{
protected:
	string FullName;
	string DateCreate;
	float numValidDate;
public:
	virtual void Input();
	virtual void OutPut();
	virtual float charge()=0;
};

