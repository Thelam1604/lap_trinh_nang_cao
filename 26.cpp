#include <iostream>
#include <climits>
using namespace std;
int main() {
    int N;
    cin >> N;
    double mean = 0.0;
    int maxNum;
    int minNum;
    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        mean += num;
        maxNum = max(maxNum, num);
        minNum = min(minNum, num);
    }

    mean /= N;

    cout  << mean << endl;
    cout<< maxNum << endl;
    cout << minNum << endl;

    return 0;
}
