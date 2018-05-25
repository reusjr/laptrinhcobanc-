#include <iostream>
using namespace std;
int main()
{
	int ngay, thang, nam, s, a, c;
	cout << "Nhap ngay,thang,nam:"<<endl;
	cin >> ngay >> thang >> nam;
	if ((nam % 4 != 0)&&(nam%100==0)||(nam%400!=0))
	{
		switch (thang)
		{
		case 1:
			c = ngay + 0;
			break;
		case 2:
			c = ngay + 31;
			break;
		case 3:
			c = ngay + 31 + 28;
			break;
		case 4:
			c = ngay + 31 + 28 + 31;
			break;
		case 5:
			c = ngay + 31 + 28 + 31 + 30;
			break;
		case 6:
			c = ngay + 31 + 28 + 31 + 30 + 31;
			break;
		case 7:
			c = ngay + 31 + 28 + 31 + 30 + 31 + 30;
			break;
		case 8:
			c = ngay + 31 + 28 + 31 + 30 + 31 + 30 + 31;
			break;
		case 9:
			c = ngay + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
			break;
		case 10:
			c = ngay + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
			break;
		case 11:
			c = ngay + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
			break;
		case 12:
			c = ngay + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
			break;
		default:
			cout << "Khong hop le." << endl;
		}
	}
	else
	{
		switch (thang)
		{
		case 1:
			c = ngay + 0;
			break;
		case 2:
			c = ngay + 31;
			break;
		case 3:
			c = ngay + 31 + 29;
			break;
		case 4:
			c = ngay + 31 + 29 + 31;
			break;
		case 5:
			c = ngay + 31 + 29 + 31 + 30;
			break;
		case 6:
			c = ngay + 31 + 29 + 31 + 30 + 31;
			break;
		case 7:
			c = ngay + 31 + 29 + 31 + 30 + 31 + 30;
			break;
		case 8:
			c = ngay + 31 + 29 + 31 + 30 + 31 + 30 + 31;
			break;
		case 9:
			c = ngay + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31;
			break;
		case 10:
			c = ngay + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
			break;
		case 11:
			c = ngay + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
			break;
		case 12:
			c = ngay + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
			break;
		default:
			cout << "Khong hop le."<<endl;
		}
	}
	s = nam - 1 + (nam - 1) / 4 - (nam - 1) / 100 + (nam - 1) / 400 + c;
	a = s % 7;
	switch (a)
	{
	case 0:
		cout << " Ngay ban can tim la Chu nhat";
		break;
	case 1:
		cout << "Ngay ban can tim la Thu hai";
		break;
	case 2:
		cout << "Ngay ban can tim la Thu ba";
		break;
	case 3:
		cout << "Ngay ban can tim la Thu tu";
		break;
	case 4:
		cout << "Ngay ban can tim la Thu nam";
		break;
	case 5:
		cout << "Ngay ban can tim la Thu sau";
		break;
	case 6:
		cout << "Ngay ban can tim la Thu bay";
		break;
	}
	cout << endl;
	system("PAUSE");
	return 0;
}