#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int N, rod, calc = 0;
    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        scanf("%d", &rod);
        calc += rod;
    }
    calc -= N - 1;
    printf("%d", calc);

    return 0;
}