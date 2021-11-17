#include <iostream>
#include <cmath>

using namespace std;
const double epsilon = 0.00001;
double f(double x)
{
	return atan(x) + pow(x, 2) - 2 ;
}
int main() {

	double a, b, c;
	a = 1.0;
	b = 3.0;
	while (b - a > epsilon)
	{
		c = (a + b) / 2;
		if (f(b) * f(c) < 0)
			a = c;
		else
			b = c;
	}
	cout << (a + b) / 2 << endl;
	return 0;
}
