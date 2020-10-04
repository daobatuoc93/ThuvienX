#include "ThuvienX.h"
void ThuvienX::INPUT()
{
	int choose;
	while (true)
	{
		system("cls");
		cout << "\n\n\t\t ============ THU VIEN X ============";
		cout << "\n\t 1. Doc gia tre em";
		cout << "\n\t 2. Doc gia nguoi lon";
		cout << "\n\t 0. Thoat";
		cout << "\n\n\t\t ============     END    ============";

		cout << "\nNhap lua chon: ";
		cin >> choose;
		DocGia* x;
		if (choose == 1) {
			x = new TreEm;
			x->Input();
			x->OutPut();
			list_DocGia.push_back(x);

		}
		if (choose == 2) {
			x = new NguoiLon;
			x->Input();
			x->OutPut();
			list_DocGia.push_back(x);
		}
		if (choose == 0) {
			break;
		}
	}
		

}
void ThuvienX::Output()
{
	for (int i = 0; i < list_DocGia.size(); i++)
	{
		cout << "\t+===============Doc gia+===============\n";
		list_DocGia[i]->OutPut();
	}
}
float ThuvienX::Total()
{
	float total=0;
	for (int i = 0; i < list_DocGia.size(); i++)
	{
		total += list_DocGia[i]->charge();
	}
	return total;
}
ThuvienX::ThuvienX(){}
ThuvienX::~ThuvienX(){}