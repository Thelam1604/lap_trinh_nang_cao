#include <iostream>

using namespace std;

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int N;
    cin >> N;

    for (int i=2; i<N;i++){
        if(isPrime(i)) {
            cout << i <<" ";
        }
    }
    return 0;
}
