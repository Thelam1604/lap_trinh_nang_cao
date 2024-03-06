#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int a, b;
    cin >> a,b;
    int d = a - b;
    int maxNumber = (a + b + abs(d)) / 2;
    cout << maxNumber << endl;

    return 0;
}
