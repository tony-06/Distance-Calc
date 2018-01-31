// Tony Russell
// 1/30/2018
// Lab #2
#include "stdafx.h"
#include <math.h>
#include <iostream>


using namespace std;

void calcDist(int coords[], int size);

int main()
{
	int coords[6];

	for (int i = 0; i < 6; i++) //inputs all 6 coordinates into array
	{
		cout << "Enter in the six coordinates of your plane\n";
		cin >> coords[i];
	}

	calcDist(coords, 6);

	system("PAUSE");
	return 0;
}

void calcDist(int coords[], int size)
{
	double x, y, z, dist;
	x = coords[0] - coords[1];
	x *= x;
	y = coords[2] - coords[3];
	y *= y;
	z = coords[4] - coords[5];
	z *= z;
	dist = sqrt(x + y + z);
	cout << dist << endl;
}