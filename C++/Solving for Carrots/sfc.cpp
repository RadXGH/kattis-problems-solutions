#include <iostream>
#include <string>
using namespace std;

int main() {
    int numPeap, numSolved;
    cin >> numPeap;
    cin >> numSolved;

    string str;
    for(int i = 0; i < numPeap; i++) {
        getline(cin, str);
        cin.ignore();
    }

    cout << numSolved << endl;

    return 0;
}