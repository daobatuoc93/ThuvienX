#include "LibraryX.h"
void LibraryX::INPUT()
{
	int choose;
	while (true)
	{
		system("cls");
		cout << "\n\n\t\t ============  Library X ============";
		cout << "\n\t 1. Objects of Children";
		cout << "\n\t 2. Objects of Adults";
		cout << "\n\t 3. Show all of information about reader";
		cout << "\n\t 0. Exit";
		cout << "\n\n\t\t ============     END    ============";

		cout << "\nPress a choice: ";
		cin >> choose;
		Reader* x;
		if (choose == 1) {
			x = new Children;
			x->Input();
			x->OutPut();
			list_DocGia.push_back(x);

		}
		if (choose == 2) {
			x = new Adults;
			x->Input();
			x->OutPut();
			list_DocGia.push_back(x);
		}
		if (choose == 3) {
			for (int i = 0; i < list_DocGia.size(); i++)
			{
				list_DocGia[i]->OutPut();
			}
			system("pause");
		}
		if (choose == 0) {
			break;
		}
	}
		

}
void LibraryX::Output()
{
	for (int i = 0; i < list_DocGia.size(); i++)
	{
		cout << "\t+===============Doc gia+===============\n";
		list_DocGia[i]->OutPut();
	}
}
float LibraryX::Total()
{
	float total=0;
	for (int i = 0; i < list_DocGia.size(); i++)
	{
		total += list_DocGia[i]->charge();
	}
	return total;
}
LibraryX::LibraryX(){}
LibraryX::~LibraryX(){}