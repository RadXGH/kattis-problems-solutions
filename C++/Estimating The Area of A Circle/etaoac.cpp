#include <iostream>
#include <stdio.h>

#define pi 3.141592654

using namespace std;

int main() {
	double r;
	int m, c;

	do {
		double area, est;

		scanf("%lf %d %d", &r, &m, &c);
		area = (double) pi * r * r;
		est = (double) 4 * c / m * r * r;

		if(r != 0 && m != 0 && c != 0) 
			printf("%.7lf %lf\n", area, est);

	} while(r != 0 && m != 0 && c != 0);

	return 0;
}