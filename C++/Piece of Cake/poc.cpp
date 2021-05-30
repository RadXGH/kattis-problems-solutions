#include <iostream>
using namespace std;

int main() {
    int side, hori, verti;
    cin >> side >> hori >> verti;

    int x, y;
    double temp = (double) side / 2;

    if(temp > hori) {
        x = side - hori;
    } else {
        x = hori;
    }
    if(temp > verti) {
        y = side - verti;
    } else {
        y = verti;
    }

    int result = x * y * 4;
    cout << result << endl;

    return 0;
}