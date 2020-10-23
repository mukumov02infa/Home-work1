#include<iostream>
#include<cmath>
using namespace std;


int main() \
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

	double min, pr;
	

	for (j = 1; j <= 3; j++)
	{
		min = INT_MAX;
		pr = 1;

		cout << "a" << j<<endl;
		for (i = 1; i < n+1; i++)
		{
			x = b + i * h;
			Res = (1 - 5.7 * cos(a[j] - x)) / (2.6 + (cos(a[j] + x) * cos(a[j] + x)));
			if (min > Res)
				min = Res;
			cout << "F (a" << j << ",x[" << i << "]) = " << Res << endl;
			pr *= abs(Res);
		
		}
		
		cout << "Min = " << min << endl;
		cout << "PR = " << pr << endl;
	}

	
}