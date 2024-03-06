#include <iostream>
#include <iomanip>
using namespace std;

double FtoC(double f) {
    return (f - 32) * 5 / 9;
}

double CtoK(double c) {
    return c + 273.15;
}

int main() {
    cout << setw(15) << "Fahrenheit" << setw(15) << "Celsius" << setw(15) << "Absolute Value" << endl;

    for (int f = 0; f <= 300; f += 20) {
        double c = FtoC(f);
        double k =CtoK(c);
        cout << setw(15) << f << setw(15) << fixed << setprecision(2) << c << setw(15) << setprecision(2) << k << endl;
    }

    return 0;
}
