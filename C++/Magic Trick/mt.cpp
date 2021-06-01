#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool checkDuplicate(string str) {
    sort(str.begin(), str.end());
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == str[i+1]) {
            return false;
        }
    }
    return true;
}

int main() {
    string str;

    cin >> str;
    if(checkDuplicate(str)) {
        printf("1");
    } else {
        printf("0");
    }

    return 0;
}