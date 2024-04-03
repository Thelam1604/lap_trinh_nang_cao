#include <iostream>

using namespace std;
void printSpacesAndStars(int spaces, int stars) {

    for (int i = 0; i < spaces; ++i) {
    cout << " ";
    }

    for (int i = 0; i < stars; ++i) {
    cout << "*";
    }
    cout << endl;
}

void printHollowTriangle(int n) {

    for (int i = 1; i <= n; ++i) {
        printSpacesAndStars(n - i, 2 * i - 1);
    }
}

int main() {
    int numRows;
    cin >> numRows;

    printHollowTriangle(numRows);

    return 0;
}
