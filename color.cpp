/*- RED, nếu color = 'R' hoặc color = 'r'
- GREEN, nếu color = 'G' hoặc color = 'g'
- BLUE, nếu color = 'B' hoặc color = 'b'
- BLACK, nếu color có giá trị khác.*/
#include<iostream>
using namespace std;
int main()
{
	char color;
	cout << "nhap vao mau sac ban muon" << endl;
	cin >> color;
	switch (color)
	{
	case 'R':
	case 'r':
		cout << " mau ban nhap la RED" << endl;
	break;
	case 'G':
	case 'g':
		cout << " mau ban nhap la GREEN" << endl;
		break;
	case 'B':
	case 'b':
		cout << " mau ban nhap la blue" << endl;
		break;
	default:
		cout << " mau ban nhap la BLACK" << endl;
		break;
	}
	system("pause");
}