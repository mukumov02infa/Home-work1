#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n, j, i;
	double h, b, x, Res;
	double a[4];
	for (j = 1; j <= 3; j++) {
		cout << "a" << j << "= ";
		cin >> a[j];
	}

	cout << "Enter n: ";
	cin >> n;

	cout << "Enter b: ";
	cin >> b;

	cout << "Enter h: ";
	cin >> h;

	cout << endl;
	double max, min;

	for (j = 1; j <= 3; j++)
	{
		max = INT_MIN;
		min = INT_MAX;

		cout << "a" << j << endl;
		for (i = 0; i < n; i++) {

			


			x = b + i * h;
			if (a >= 0)
				Res = x * cos(a[j] - x + 1);
			else
				Res = 2 * cos(a[j] + x);

			if (max < abs(Res))
				max = abs(Res);
			if (min > abs(Res))
				min = abs(Res);
			cout << "F (a" << j << ",x[" << i << "]) = " << Res << endl;
		}
		cout <<"Min = "<< min<< endl;
		cout << "Max = " << max << endl;
	}
	return 0;
}
