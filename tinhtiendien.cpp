/* Viết chương trình tính tiền điện gồm các khoảng sau:
- Tiền thuê bao điện kế: 1000đ/tháng
- Định mức sử dụng điện cho mỗi hộ là: 50 KW với giá 230đ/KW
- Nếu phần vượt định mức <= 50KW thì tính giá 480đ/KW
- Nếu 50KW < phần vượt định mức < 100KW thì tính giá 700đ/KW
- Nếu phần vượt định mức >= 100KW thì tính giá 900đ/KW Chỉ số mới và cũ được nhập vào từ bàn phím
- In ra màn hình chỉ số cũ, chỉ số mới, tiền trả định mức, tiền trả vượt định mức, tổng tiền
phải trả.*/
#include <iostream>
using namespace std;
int main()
{
	int tb, csm, csc, tiendm, tienvdinhmuc, s, cs;
	cout << " nhap chi so cu" << endl;
	cin >> csc;
	cout << "nhap chi so moi" << endl;
	cin >> csm;
	cs = csm - csc;
	if (cs >= 100)
		s = (csm - 100) * 900 + 50 * 700 + 50 * 480 + 50 * 230;
	else if
}
