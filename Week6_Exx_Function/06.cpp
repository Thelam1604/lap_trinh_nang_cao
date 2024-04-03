#include <iostream>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;

    int ucln = gcd(a, b);
    if (ucln == 1) {
        cout << "YES" << endl;
    } else {
        cout <<"NO" << endl;
    }

    return 0;
}
