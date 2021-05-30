#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int i,n;
	char x[100][101];
	
	cin>>n;
	
	for (i=0;i<n;i++) {
		cin>>x[i];
	}
	
	for (i=0;i<n;i++) {
		cout<<strlen(x[i])<<endl;
	}
	
	return 0;
}
