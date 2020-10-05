#include"LibraryX.h"
int main() {
	LibraryX* LibObj = new LibraryX();
	LibObj->INPUT();
	float total = LibObj->Total();
	cout << "\nTotal:" << total << endl;
	delete LibObj;
//	std::auto_ptr()
}