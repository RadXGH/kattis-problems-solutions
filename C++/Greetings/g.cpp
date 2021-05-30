#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    
    int len = 0;
    while(str[len] != '\0') {
        len++;
    }

    len = len - 2;
    cout << 'h';
    for(int i = 0; i < len * 2; i++) {
        cout << 'e';
    }
    cout << 'y' << endl;

    return 0;
}