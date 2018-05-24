#include<iostream>
#include<string>
using namespace std;
int main()
{
	int a, b, s;
	char c;
	cout << " nhap so can  tinh" << endl;
	cin >> a >> b;
	cout << "nhap viec muon lam" << endl;
	cin >> c;
	switch (c)
	{
	
	case '+':
		cout << "tong la" << a + b << endl;
		break;
	case '-':
		cout << "hieu la" << a-b << endl;
		break;
	case '*':
		cout << "tich la" << a * b << endl;
		break;
	case '/':
		cout << "thuong la" << a / b << endl;
		break;
	default:
		cout << "ban nhap khong dung" << endl;
		break;
	}
	system("pause");
}