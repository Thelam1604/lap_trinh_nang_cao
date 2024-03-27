#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<bool> seen(N + 1, false);
    bool found = false;
    for (int i = 0, num; i < N; ++i) {
        cin >> num;
        if (seen[num]) {
            found = true;
            break;
        } else {
            seen[num] = true;
        }
    }
    cout << (found ? "Yes" : "No");
    return 0;
}
