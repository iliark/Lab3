#include <cmath>
#include "Header.h"
int findFirstNegativeElement(double eps)
{
	int i = 0;
	double a;
	while (i < INT_MAX)
	{
		a = pow(-1, i) * (i + 1) / (pow(i, 3) + 2);
		if (abs(a) < eps && a < 0)
			return i;
		++i;
	}
}