#include"ThuvienX.h"
int main() {
	ThuvienX* LibObj = new ThuvienX();
	LibObj->INPUT();
	float total = LibObj->Total();
	cout << "\nTotal:" << total << endl;
	delete LibObj;
//	std::auto_ptr()
}