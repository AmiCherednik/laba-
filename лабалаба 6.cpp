#include <iostream> 
#include <iomanip> 
#include "windows.h"

using namespace std;

int main()
{
	int a, b;
	float h, c, d;
	cout << "Enter a =";
	cin >> a;
	cout << "Enter b =";
	cin >> b;
	cout << "Enter h =";
	cin >> h;
	float y, x = a;
	while (x <= b)
	{
		y = pow(x, 5) + pow(x, 0.5) - 3;
		cout << setw(10) << "x=" << x << setw(10) << "y=" << y << endl;
		x += h;
	}
	system("pause");
	return 0;
}

