#include <math.h>
#include "Header.h"
double summ(int n)
{
	double s = 0;
	int i = 0;
	while (i <= n - 1) 
	{
		s += pow(-1, i) * (i+1) / (pow(i, 3) + 2);
		++i;
	}
	return s;
}