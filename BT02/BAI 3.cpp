#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    if (a + b > c && b + c > a && a + c > b) {
        double  chuVi = a + b + c;
        cout << chuVi << endl;
        if (a == b && b == c) {
            cout << "đều" << endl;
        } else if (a == b || b == c || a == c) {
            cout << "cân" << endl;
        } else if (a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b) {
            cout << " vuông" << endl;
        } else {
            cout << " thường" << endl;
        }
    } else {
        cout << " không là tam giác." << endl;
    }

    return 0;
}
