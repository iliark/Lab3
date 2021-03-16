#include <cmath>
#include "Header.h"
int findFirstNegativeElement(double eps)
{
	int i = 0;
	for (i; i < INT_MAX; ++i)
	{
		double a = pow(-1, i) * (i + 1) / (pow(i, 3) + 2);
		if (abs(a) < eps && a < 0)
			return i;
	}
}