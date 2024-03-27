#include <iostream>
#include <string>

using namespace std;

bool is(int num) {
    string str = to_string(num);
    int i = 0, j = str.length() - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int sum(int A, int B) {
    int count = 0;
    for (int i = A; i <= B; i++) {
        if (is(i)) {
            count++;
        }
    }
    return count;
}

int main() {
    int A, B;
    cin >> A >> B;
    cout << sum(A, B) << endl;
    return 0;
}
