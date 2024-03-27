#include <iostream>
#include <string>

using namespace std;

bool is(const string &str) {
    int i = 0, j = str.length() - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    string str;
    getline(cin, str);

    if (is(str)) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
