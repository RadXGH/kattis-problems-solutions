#include <stdio.h>

int main () {
	int a,b,c,x=0,y=0;
	
	scanf("%d %d",&a,&b);
	
	while (a!=0) {
		c=a%10;
		x=x*10+c;
		a=a/10;
	}
	
	while (b!=0) {
		c=b%10;
		y=y*10+c;
		b=b/10;
	}
	
	if (x>y) {
		printf("%d",x);
	} else {
		printf("%d",y);
	}
			
	return 0;
}
