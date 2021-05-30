#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numCase;
    cin >> numCase;

    int b;
    double p;
    for(int i = 0; i < numCase; i++) {
        cin >> b >> p;

        double calcBPM = 60 * b / p;
        double actualBPM = 60 / p;

        cout << setprecision(4) << fixed;
        cout << calcBPM - actualBPM << ' ' << calcBPM << ' ' << calcBPM + actualBPM << endl;
    }

    return 0;
}