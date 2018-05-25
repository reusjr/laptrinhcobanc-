/*Viết chương trình nhập vào 3 giá trị nguyên dương a, b, c. Kiểm tra xem a, b, c có phải là 3 cạnh của tam giác không? Nếu là 3 cạnh của tam giác thì tính diện tích của tam giác.
Hướng dẫn: a, b, c là 3 cạnh của tam giác phải thỏa điều kiện sau:
(a + b) > c và (a + c) > b và (b + c) > a
Nếu a, b, c là ba cạnh của tam giác thì sử dụng cô thức Herong để tính diện tích:*/
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float a, b, c, s, p;
	cout << " nhap 3 so a b c " << endl;
	cin >> a >> b >> c;
	if (((a + b) > c) && ((a + c) > b) && ((c + b) > a))
	{
		cout << " 3 so ban nhap la 3 canh cua tam gia" << endl;
		p = (a + b + c) / 2;
		s = sqrt(p*(p - a)*(p - b)*(p - c));
		cout << "dien tich tam giac la" <<s<<endl;
	}
	else
	{
		cout << " ba so ban nhap ko phai ba canh cua tam giac" << endl;
	}
	system("pause");
}
