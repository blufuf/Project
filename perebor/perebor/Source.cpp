
#include <iostream>
#include <cmath>

using namespace std;

double func(double x) {
	return atan(x) + pow(x, 2) - 2;
}

int main() {

	double eps = 0.00001;
	for (double x = 1.0; x <= 3.0; x = x + eps) {
		double y = func(x);
		if (fabs(0 - y) < eps) {
			cout << x << endl;
			break;
		}
	}
	
		
	return 0;
}

