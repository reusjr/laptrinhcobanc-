/*Viết chương trình nhập vào điểm 3 môn thi: Toán, Lý, Hóa của học sinh. Nếu tổng
điểm >= 15 và không có môn nào dưới 4 thì in kết quả đậu. Nếu đậu mà các môn đều lớn hơn 5 thì in ra lời phê "Học đều các môn", ngược lại in ra "Học chưa đều các môn", các trường hợp khác là "Thi hỏng".*/
#include <iostream>
using namespace std;
int main()
{
	int t, l, h, s;
	cout << " nhap diem lan luot la toan li hoa" << endl;
	cin >> t >> l >> h;
	s = t + l + h;
	if ( (t > 10) || (l > 10) || (h > 10)) cout << " ban nhap sai" << endl;
	else if ((s >= 15) && (t >= 4) && (l >= 4) && (h >= 4))
	{
		cout << "ban thi duoc tong diem la: " << s << endl;
		cout << "dau" << endl;
		if ((t >= 5) && (l >= 5) && (h >= 5)) cout << " hoc deu cac mon" << endl;
		else cout << "hoc chua deu cac mon" << endl;
	}
	else
	{
		cout << "ban thi duoc tong diem la: " << s << endl;
		cout << "thi hong" << endl;
	}
	system("pause");
}		
