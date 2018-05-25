/* Viết chương trình tính tiền điện gồm các khoảng sau:
- Tiền thuê bao điện kế: 1000đ/tháng
- Định mức sử dụng điện cho mỗi hộ là: 50 KW với giá 230đ/KW
- Nếu phần vượt định mức <= 50KW thì tính giá 480đ/KW
- Nếu 50KW < phần vượt định mức < 100KW thì tính giá 700đ/KW
- Nếu phần vượt định mức >= 100KW thì tính giá 900đ/KW 
		Chỉ số mới và cũ được nhập vào từ bàn phím
- In ra màn hình chỉ số cũ, chỉ số mới, tiền trả định mức, tiền trả vượt định mức, tổng tiền
phải trả.*/


#include <iostream>
using namespace std;
int main()
{
	int chiSoCu, chiSoMoi,tongCong, tienDinhMuc, tienVuotDinhMuc, soChiSoSuDung;
	tienVuotDinhMuc = 0;
	cout << " nhap chi so cu" << endl;
	cin >> chiSoCu;
	cout << "nhap chi so moi" << endl;
	cin >> chiSoMoi;

	soChiSoSuDung = chiSoMoi - chiSoCu;
	if (soChiSoSuDung < 0) {
		cout << "ban nhap sai" << endl;
	}
	else
	{
		if (soChiSoSuDung >= 100) {
			tongCong = (soChiSoSuDung - 100) * 900 + 50 * 700 + 50 * 480;
		} else if (50 <= soChiSoSuDung) {
			tongCong = (soChiSoSuDung - 50) * 700 + 50 * 480;
		} else if (soChiSoSuDung < 50) {
			tongCong = soChiSoSuDung * 230;
		}
		
		cout << "Chỉ số cũ: " << chiSoCu << endl;
		cout << "Chỉ số mới: " << chiSoMoi << endl;

		if (soChiSoSuDung < 50)
		{
			cout << "ban chua vuot dinh muc" << endl;
			cout << " tong tien phai tra " << tongCong;
		}
		else
		{
			cout << "tien vuot dinh muc phao tra la" << tongCong - 50 * 230 << endl; 
			cout << "tong tien phai tra la" << tongCong;
		}
		system("PAUSE");
	}
}

/*
	Nhập chỉ số cũ & chỉ số mới 
		
		=> số chữ

	 - dưới 50kW							=> 230đ/kW
	 - vượt + số chữ < 50kW					=> 480đ/kW
			+ 50kW <= số chữ < 100kW		=> 700đ/kW
			+ 100kW < số chữ				=> 900đ/kW

	In ra: 
		+ chỉ số cũ & mới 
		+ tiền định mức
		+ vượt định mức => ko có thì thôi
		+ tổng
*/


/*cout << "-----------------------";

Dao's code:

	if (soChiSoSuDung >= 100) {
		tienVuotDinhMuc = (soChiSoSuDung - 100) * 900 + (50 * 480);
		tienDinhMuc = 50 * 230;
		tongCong = tienDinhMuc + tienVuotDinhMuc;
	}
	else if (soChiSoSuDung >= 50) {
		tienVuotDinhMuc = (soChiSoSuDung - 50) * 480;
		tienDinhMuc = 50 * 230;
		tongCong = tienDinhMuc + tienVuotDinhMuc;
	}
	else {
		tienDinhMuc = soChiSoSuDung * 230;
		tongCong = tienDinhMuc;

	cout << "Số tiền định mức phải trả: " << tienDinhMuc << endl;
	if (tienVuotDinhMuc > 0)
	cout << "Số tiền vượt định mức phải trả: " << tienVuotDinhMuc << endl;
	cout << "Số tiền tổng cộng phải trả" << tongCong;
}*/