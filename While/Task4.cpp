#include <cmath>
#include "Header.h"
int findFirstElement(double eps)
{
	int i = 0;
	while (i<INT_MAX)
	{	
		if (abs(pow(-1, i) * (i + 1) / (pow(i, 3) + 2)) < eps)
			break;
		++i;
	}
	return i;
}