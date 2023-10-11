#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, xp, xk, dx, a, b, c, F;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

	cout << "---------------" << endl;
	cout << "|" << setw(5) << "x" << "|" << setw(7) << "F" << "|" << endl;
	cout << "---------------" << endl;


	for (x = xp; x <= xk; x += dx)
	{
		if ((x + 5) < 0 && c == 0)
		F = ((1 / (a * x)) - b);
		else if ((x + 5) > 0 && c != 0)
			F = (x - a) / x;
		else if (!((x + 5) < 0) && !(c == 0) && !((x + 5) > 0) && !(c != 0))
			F = (10 * x) / (c - 4);
		cout << "|" << setw(5)<< setprecision(2) << x << "|" << setw(7) << setprecision(2) << F << "|" << endl;
	}
	cout << "---------------" << endl;
	return 0;
}