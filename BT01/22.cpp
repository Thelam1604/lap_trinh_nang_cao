#include <iostream>
using namespace std;
int main() {
    double weight, height;
    cin >> weight;
    cin >> height;
    double bmi = weight / (height * height);

    cout << bmi << endl;

    return 0;
}
