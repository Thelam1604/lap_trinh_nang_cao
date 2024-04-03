#include <iostream>
#include <string>
#include <cmath>

using namespace std;


string decimalToBinary(int n) {
    if (n == 0)
        return "0";

    string binary;
    while (n > 0) {
        binary = to_string(n % 2) + binary;
        n /= 2;
    }

    return binary;
}

int binaryToDecimal(string binary) {
    int decimal = 0;
    int base = 1;
    int len = binary.length();
    for (int i = len - 1; i >= 0; i--) {
        if (binary[i] == '1')
            decimal += base;
        base *= 2;
    }
    return decimal;
}

int main() {
    int numDecimal;
    cin >> numDecimal;

    string binaryResult = decimalToBinary(numDecimal);
    cout << binaryResult << endl;

    string numBinary;
    cin >> numBinary;

    int decimalResult = binaryToDecimal(numBinary);
    cout << decimalResult << endl;

    return 0;
}
