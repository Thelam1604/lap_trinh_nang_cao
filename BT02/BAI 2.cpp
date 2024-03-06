#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x;
    int y;
    cin >> x;
    cin >> y;

    double result = 1.0;
    for (int i = 0; i < abs(y); ++i) {
        result *= x;
    }

    if (y < 0) {
        result = 1.0 / result;
    }
    cout << result << endl;
    double powResult = pow(x, y);
    cout << powResult << endl;

    return 0;
}
