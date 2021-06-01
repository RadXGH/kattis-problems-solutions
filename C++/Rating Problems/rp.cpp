#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int n, k, r, x;
    double max, min;
    int calc = 0, voted;

    scanf("%d %d", &n, &k);
    x = n - k;
    for(int i = 1; i <= k; i++) {
        scanf("%d", &r);
        calc += r;
    }

    voted = calc;

    //max
    max = voted;
    for(int i = 1; i <= x; i++) {
        max += 3;
    }
    max = (double) max / n;

    //min
    min = voted;
    for(int i = 1; i <= x; i++) {
        min += -3;
    }
    min = (double) min / n;

    printf("%.4lf %.4lf", min, max);

    return 0;
}