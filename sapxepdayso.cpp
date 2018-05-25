/*Viết chương trình nhập vào 3 số nguyên rồi in ra màn hình theo thứ tự tăng dần.*/
#include <iostream>
using namespace std;
int main() {
	int a, b, c; // 3 số nguyên
	int temp;// biến tạm thời để giúp đổi chỗ (temporary)

	cout << "nhap abc" << endl;
	cin >> a >> b >> c;
	// chuyển số bé nhất vào a
	if (a>b) {
		temp = a;
		a = b;
		b = temp;
	}

	if (a>c) {
		temp = a;
		a = c;
		c = temp;
	}

	// chuyển số bé nhì vào b
	if (b>c) {
		temp = b;
		b = c;
		c = temp;
	}
	cout << a << "\t" << b << "\t" << c << endl;
	system("pause");
}