#include <iostream>
using namespace std;

int main() {
    char str[32];
    cin >> str;

    int hiss;
    for(int i = 0; i < sizeof(str); i++) {
        if(str[i] == 's' && str[i + 1] == 's') {
            hiss = 1;
            break;
        } else {
            hiss = 0;
        }
    }

    if(hiss == 1) {
        cout << "hiss" << endl;
    } else {
        cout << "no hiss" << endl;
    }

    return 0;
}