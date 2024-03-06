#include <iostream>
using namespace std;

int main() {
    while (true) {
        int N;
        cin >> N;

        if (N == -1) {
            cout << "Bye" << endl;
            break;
        } else {
            int result = (N >= 0 && N % 5 == 0) ? (N / 5) : -1;
            cout << result << endl;
        }
    }

    return 0;
}
