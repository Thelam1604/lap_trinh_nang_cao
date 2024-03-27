#include <iostream>

using namespace std;

int main() {
    char a[3];

    a[0] = 'A';
    a[1] = 'B';
    a[2] = 'C';

    // Đọc tràn
    cout << a[-1] << endl;
    cout << a[3] << endl;
    cout << a[4] << endl;

    a[-5] = 'X';
    a[5] = 'Y';
    a[7] = 'Z';

    int arr2D[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    for (int i = 0; i < 6; ++i) {
        arr2D[0][i] = i + 1;
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << arr2D[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
