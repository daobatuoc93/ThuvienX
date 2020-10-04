#include "DocGia.h"

void DocGia::Input()
{
	fflush(stdin); // xóa bộ nhớ đệm]
	cin.ignore();
	cout << "\nNhap ho ten doc gia: ";
	getline(cin, FullName);
	fflush(stdin);
	cout << "TimeValidate: ";
	cin.ignore();
	getline(cin, DateCreate);
	cout << "numValiddate";
	cin >> numValidDate;
}

void DocGia::OutPut()
{
	cout << "\nHo ten doc gia: " << FullName;
	cout << "\nNgay lap the(dd/mm/yyyy): " << DateCreate;
	cout << "\nSo thang co hieu luc: " << numValidDate;
}
