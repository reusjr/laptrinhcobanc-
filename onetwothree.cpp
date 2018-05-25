/*- Búa (B) thắng Kéo, thua Giấy.
- Kéo (K) thắng Giấy, thua Búa.
- Giấy (G) thắng Búa, thua Kéo.*/
#include <iostream>
using namespace std;
int main()
{
	char a, b;
	cout << " nhap K la keo G la giay va B la bua" << endl;
	cout << "moi ban a nhap" << endl;
	cin >> a;
	cout << "moi ban b nhap" << endl;
	cin >> b;
	switch (a)
	{
	case 'B':
		switch (b)
		{
		case 'B':
			cout << "2 ban hoa nhau" << endl;
			break;
		case 'K':
			cout << "bua thang keo a win" << endl;
			break;
		case 'G':
			cout << "bua thua giay a thua" << endl;
			break;
		default:
			cout << "ban b nhap sai" << endl;
			break;
		}
	break;
	case 'K':
		switch (b)
		{
		case 'B':
			cout << "keo thua bua ban a thua" << endl;
			break;
		case 'K':
			cout << "2 ban hoa nhau" << endl;
			break;
		case 'G':
			cout << "keo thang giay ban a win" << endl;
			break;
		default:
			cout << "ban b nhap sai" << endl;
			break;
		}
	break;
	case 'G':
		switch (b)
		{
		case 'B':
			cout << "giay thang bua ban a win" << endl;
			break;
		case 'K':
			cout << "giay thua keo ban a thua" << endl;
			break;
		case 'G':
			cout << "2 ban hoa nhau" << endl;
			break;
		default:
			cout << "ban b nhap sai" << endl;
			break;
		}
	break;
	default:
		cout << "ban a nhap sai" << endl;
		break;
	}
	system("pause");

}