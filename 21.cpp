#include <iostream>
#include <cmath>
using namespace std;
double DienTichTamGiac(double a, double b, double c) {
    double nuaChuVi = (a + b + c) / 2;

    double DienTich = sqrt(nuaChuVi * (nuaChuVi - a) * (nuaChuVi - b) * (nuaChuVi - c));

    return DienTich;
}

int main() {
    double a, b, c;
    cin >> a>> b >>c;
    if (a + b > c && a + c > b && b + c > a) {
        double area= DienTichTamGiac(a, b, c);
        cout << area << endl;
    } else {
        cout << "errol" << endl;
    }

    return 0;
}
