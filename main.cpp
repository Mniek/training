#include <iostream>
#include <math.h>


using namespace std;
int a, b, c, delta, x1, x2, x3;
int main()

{
	cout << "podaj a: ";
	cin >> a;
	cout << "podaj b: ";
	cin >> b;
	cout << "podaj c: ";
	cin >> c;

	delta = (b*b)-(4*a*c);
	x1 = (-b - sqrt(delta)) / (2 * a);
	x2 = (-b + sqrt(delta)) / (2 * a);

	cout << "delta jest rowna: " << delta << " ";


	if (delta > 0)
	{
		cout << "delta ma dwa rowiazania " << x1 << " oraz " << x2;

	if (a == 0)
	{
		cout << "delta nie ma rozwiazan";
	}
	if (a > 0)
	{
		cout << " a jej ramiona sa skierowane ku gorze";
	}
	if (a < 0)
	{
		cout << " a jej ramiona sa skierowane do dolu";
	}
	}


	else if (delta==0)
	{
		cout << "delta ma dokladnie jednonrozwiazanie " << x3;
		if (a == 0)
		{
			cout << "delta nie ma rozwiazan";
		}
		if (a > 0)
		{
			cout << " a jej ramiona sa skierowane ku gorze";
		}
		if (a < 0)
		{
			cout << " a jej ramiona sa skierowane do dolu";
		}
	}


	else
	{
		cout << "funkcja nie ma rozwiazan ";
	}


	return 0;
}
