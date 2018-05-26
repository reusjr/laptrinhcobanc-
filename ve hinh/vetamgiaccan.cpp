/*ve tam giac can*/
#include <iostream>
using namespace std;
int main()
{
	int a, i, j, k;
	cout << "nhap chieu cao tam giac" << endl;
	cin >> a;
	for (i = 1; i <= a; i++)
	{
		for (j = 1; j <= a- i; j++) 
			cout << " ";
			for (k = 1; k <= 2 * i - 1; k++) cout << "*";
			cout << endl;
	}
	system("pause");
}