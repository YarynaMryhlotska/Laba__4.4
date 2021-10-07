#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, xp, xk, dx, y, R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;
	

	cout << fixed;
	cout << "----------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "y" << " |" << endl;
	cout << "----------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		if (x <= -5)
			y = -3;
		else
			if (-5 < x && x <= -R)
				y = -3 + ((3 * (x + 5)) / (5 - R));
			else
				if (-R < x && x <= R)
					y = sqrt(R * R - x * x);
				else
					if (R < x && x <= 8)
						y = (R * (x - R)) / (8 - R);
					else
						y = R;

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(6) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "----------------------" << endl;
	return 0;
}