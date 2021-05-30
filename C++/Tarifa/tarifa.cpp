#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    int numCase;
    cin >> numCase;

    int *num = (int*) malloc(numCase * sizeof(int));
    int calc = 0;
    for(int i = 0; i < numCase; i++) {
        cin >> num[i];
        calc += num[i];
    }

    int totalMB = (numCase + 1) * x;
    int result = totalMB - calc;

    cout << result << endl;

    return 0;
}