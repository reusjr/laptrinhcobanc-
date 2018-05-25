/*Viết chương trình nhập vào 2 số x, y và 1 trong 4 toán tử +, -, *, /. Nếu là + thì in ra
kết quả x + y, nếu là – thì in ra x – y, nếu là * thì in ra x * y, nếu là / thì in ra x / y (nếu y = 0 thì thông báo không chia được)*/
#include <iostream>
using namespace std;
int main()
{
	int x, y;
	char p;
	cout << "nhap 2 so vao" << endl;
	cin >> x >> y;
	cout << "nhap phep toan muon thuc hien" << endl;
	cin >> p;
	switch (p)
	{
	case '+':
		cout << " ban nhap phep cong ket qua la" << x + y << endl;
		break;
	case '-':
		cout << "ban nhap phep tru ket qua la" << x - y << endl;
		break;
	case '*':
		cout << "ban nhap phep nhan ket qua la" << x * y << endl;
		break;
	case '/':
		if (y == 0) cout << " ban nhap phep chia nhung khong chia duoc" << endl;
		else cout << "ban nhap phep chia ket qua la" << (float)x / y << endl;
		break;
	default:
		cout << "ban nhap sai" << endl;
		break;
	}
	system("pause");
}