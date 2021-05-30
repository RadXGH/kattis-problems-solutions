#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	int n, s, t;

	do {
		int tPrev = 0;
		int cnt = 0, ans = 0;
		int miles = 0;
		
		scanf("%d", &n);
		for(int i = 1; i <= n; i++) {
			scanf("%d%d", &s, &t);
			miles += s * (t - tPrev);
			tPrev = t;
			cnt++;
		}

		if(n != -1) {
			printf("%d%s", miles, " miles");
			puts("");
		}
	} while(n != -1);

	return 0;
}
