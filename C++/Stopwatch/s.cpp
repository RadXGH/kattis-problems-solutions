#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int n, time, secs[2], j = 0, calc = 0;

    scanf("%d", &n);

        for(int i = 1; i <= n; i++) {
            scanf("%d", &time);

            secs[j] = time;
            j++;
                
            if(j == 2) {
                calc += secs[j-1] - secs[j-2];
                j = 0;
            }
        }

    if(n % 2 == 0) {
        printf("%d", calc);
    } else {
        printf("%s", "still running");
    }

    return 0;
}