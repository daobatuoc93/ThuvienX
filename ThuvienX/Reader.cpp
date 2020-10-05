#include "Reader.h"

void Reader::Input()
{
	fflush(stdin); // xóa bộ nhớ đệm]
	cin.ignore();
	cout << "\nName of Reader: ";
	getline(cin, FullName);
	cout << "TimeValidate: ";
	cin.ignore();
	getline(cin, DateCreate);
	cout << "numValiddate";
	cin >> numValidDate;
}

void Reader::OutPut()
{
	cout << "\nName of reader: " << FullName;
	cout << "\ndate(dd/mm/yyyy): " << DateCreate;
	cout << "\nMonth validation: " << numValidDate;
}
