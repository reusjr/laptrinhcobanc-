/*chuong trinh c++ thay doi sdt 11 so thanh 10 so*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
	char sdt[12];
	int nhaMang;
	int i;
	cout << " nhap so dien thoai can chuyen" << endl;
	cin.getline(sdt, 12);
	sdt[0] = ' ';
	sdt[1] = '0';
	cout << "nhap nha mang ban dang su dung" << endl;
	cout << "1.MOBIPHONE" << endl << "2.VINAPHONE" << endl << "3.VIETTEL" << endl << "4.VIETNAMMOBILE & GMOBILE" << endl;
	cin >> nhaMang;
	switch (nhaMang)
	{
	case 1:
		sdt[2] = '7';
		if (sdt[3] =='1') sdt[3] = '9';
		else if (sdt[3] =='2' ) sdt[3] = '7';
		else sdt[3] = sdt[3];
		break;
	case 2:
		sdt[2] = '8';
		if (sdt[3] == '7') sdt[3] = '1';
		else if (sdt[3] == '9') sdt[3] = '2';
		else sdt[3] = sdt[3];
		break;
	case 3:
		sdt[2] = '3';
		sdt[3] = sdt[3];
		break;
	case 4:
		sdt[2] = '5';
		break;
	default:
		cout << " ban nhap sai nha mang roi" << endl;
		break;

	}
	cout <<"SO DIEN THOAI CUA BAN SAU KHI DOI LA: "<< sdt << endl;
	system("pause");
}
	