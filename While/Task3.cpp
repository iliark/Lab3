#include <cmath>
#include "Header.h"
#include <iostream>
using namespace std;
void print(int n, int k)
{	
	int i = 0;
	while (i < n)
	{
		if (i!= 0 && i % k == 0)
			continue;
		cout << pow(-1, i) * (i + 1) / (pow(i, 3) + 2)<<endl;
		++i;
	}

}
	