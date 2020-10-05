#pragma once
#include<vector>;
#include<iostream>
#include"Children.h"
#include"Adults.h"
using namespace std;
class LibraryX
{
public:
	void INPUT();
	void Output();
	float Total();
	LibraryX();
	~LibraryX();
private:
	vector<Reader *> list_DocGia;
};

