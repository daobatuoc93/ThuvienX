#pragma once
#include<vector>;
#include<iostream>
#include"TreEm.h"
#include"NguoiLon.h"
using namespace std;
class ThuvienX
{
public:
	void INPUT();
	void Output();
	float Total();
	ThuvienX();
	~ThuvienX();
private:
	vector<DocGia *> list_DocGia;
};

