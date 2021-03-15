#include <cmath>
#include "Header.h"
double summ2(double eps)
{
	int i = 0;
	double a = pow(-1, i) * (i + 1) / (pow(i, 3) + 2);
	double s = a;
	for (int i=1; abs(a) > eps; ++i)
	{
		a = pow(-1, i) * (i + 1) / (pow(i, 3) + 2);
		s += a ;
	}
	return s;
}