#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n = 30, m, j, i, f;
	double h, Res;

	double* z = new double[n];


	cout << "m = ";
	cin >> m;
	cout << "h = ";
	cin >> h;

	cout << "z0 = ";
	cin >> z[0];
	cout << "z1 = ";
	cin >> z[1];

	for (i = 2; i <= n; i++)
	{
		z[i] = (1 - z[i - 1]) / (1 + z[i - 2] * z[i - 2]) * sin(z[i - 1] * z[i - 1] + z[i - 1] * z[i - 2] + 2);
		cout << "z[" << i << "] = " << z[i] << endl;
	}

	for (i = 1; i <= m; i++)
	{
		f = 0;
		for (j = 1; j < n; j++)
		{
			if (z[j] >= (i - 1) * h && z[j] < i * h)
				f++;

		}
		cout << "f =" << f << endl;

	}
		
}
