#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n, j, i;
	double h, b, x, Res;
	double a[4];
	for (j = 1; j <= 3; j++)
	{
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
	double max, pr;
	max = INT_MIN;

	for (j = 1; j <= 3; j++) 
	{
		max = INT_MIN;
		pr = 1;

		for (i = 1; i < n + 1; i++) 
		{
			x = b + i * h;
			Res = 0.8 + 2 * sin(x) - 5.5 * sin(a[j]) * sin(a[j]);
			if (max < abs(Res))
				max = abs(Res);
			cout << "F (a" << j << ",x[" << i << "]) = " << Res << endl;
			pr *= abs(Res);

		}

		cout << "Max = " << max << endl;
		cout << "PR = " << pr << endl;
	}
}
