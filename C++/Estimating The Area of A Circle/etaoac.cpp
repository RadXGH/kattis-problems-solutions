#include <iostream>
using namespace std;

int main() {
	double r[1][1001],x[1][1001],a[1][1001],b[1][1001];
	int m[1][1001],c[1][1001];
	int i;
	
	for (i=0;i<1000;i++) {
		cin >> r[i][1001] >> m[i][1001] >> c[i][1001];
		x[i][1001]=m[i][1001]/c[i][1001];
		if (r[i][1001]==0&&m[i][1001]==0&&c[i][1001]==0) {
			break;
		} 
	}
	
		for (i=0;i<1000;i++) {
		x[i][1001]=m[i][1001]/c[i][1001];
		c
		if (r[i][1001]==0&&m[i][1001]==0&&c[i][1001]==0) {
			break;
		} 
	}
	
	return 0;
}
