#include <cmath>
#include "Header.h"
#include <iostream>
using namespace std;
void print(int n, int k)
{	
	cout << pow(-1, 0) * (0 + 1) / (pow(0, 3) + 2)<< endl;
	for (int i = 1; i < n; i++)
	{
		if (i % k == 0)
			continue;
		cout << pow(-1, i) * (i + 1) / (pow(i, 3) + 2)<<endl;
	}
}
	