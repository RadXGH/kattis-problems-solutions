#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main() {
    double n;
    scanf("%lf", &n);
    printf("%.6lf", pow(n, (1/n)));

    return 0;
}