#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4, num5;
    cin >> num1 >> num2 >> num3 >> num4 >>num5;

    int minNum = min(min(num1, num2), min(num3, min(num4, num5)));
    int maxNum = max(max(num1, num2), max(num3, max(num4, num5)));

    int middleNum = num1 + num2 + num3 + num4 + num5 - minNum - maxNum;

    cout << middleNum << endl;

    return 0;
}
