/*Viết chương trình nhập số giờ làm và lương giờ rồi tính số tiền lương tổng cộng. Nếu
số giờ làm lớn hơn 40 thì những giờ làm dôi ra được tính 1,5 lần.*/
#include <iostream>
using namespace std;
int main()
{
	int h, t, s;
	cout << "nhap so gio lam" << endl;
	cin >> h;
	cout << " nhap tien luon 1 h" << endl;
	cin >> t;
	if (h > 40)
	{
		s = 40 * t + (h - 40)*t;
		cout << "ban lam duoc " << h << "gio" << "va nhan duoc so tien la " << s << endl;
	}
	else cout << "ban lam duoc " << h << "gio" << "va nhan duoc so tien la " << t*h << endl;
	system("pause");
}