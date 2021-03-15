#include <cmath>
#include "Header.h"
int findFirstElement(double eps)
{
	int i = 0;
	for (i; i<INT_MAX; ++i)
	{	
		if (abs(pow(-1, i) * (i + 1) / (pow(i, 3) + 2)) < eps)
			break;
	}
	return i;
}