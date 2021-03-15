#include <math.h>
#include "Header.h"
double summ(int n)
{
	double a = 0;
	for (int i = 0; i <= n - 1; i++) 
	{
		a += pow(-1, i) * (i+1) / (pow(i, 3) + 2);
	}
	return a;
}