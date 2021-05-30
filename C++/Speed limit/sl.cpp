#include <iostream>
using namespace std;

int main() {
	int n,i,s[1][11],t[1][11],x[1][11],y[1][11],a[1][11];
	y[i][11]=0;
	
	do {
		cin>>n;
		for (i=0;i<n;i++) {
			cin>>s[i][11]>>t[i][11];
			if (i=0) {
				x[i][11]=s[i][11]*t[i][11];
			} else {
				x[i][11]=s[i][11]*t[i][11]-t[i-1][11];
			}
		}
		for (i=0;i<n;i++) {
			x[i][11]+=x[i][11];
		cout<<y[i]<<"miles\n"<<endl;
		cin>>n;
	} while (n!=-1);
	
	return 0;	
}
