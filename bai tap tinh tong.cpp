#include <iostream>
using namespace std;
int main()
{
	int a, s;
	s = 0;
	do
	{
		cout << " nhap so nguyen can tinh tong" << endl;
		cin >> a;
		s = s + a;
		cout << " tong la: " << s << endl;
		cout << "nhan 0 de out" << endl;
	} while (a != 0);
}