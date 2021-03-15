#include <cmath>
#include "Header.h"
int findFirstElement(double eps)
{
	int i = 0;
	do
	{	
		if (abs(pow(-1, i) * (i + 1) / (pow(i, 3) + 2)) < eps)
			break;
		++ i;
	} while (i < INT_MAX);
	return i;
}