#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void print(int arr[], int N) {
    for (int i = 0; i < N - 2; ++i) {
        for (int j = i + 1; j < N - 1; ++j) {
            for (int k = j + 1; k < N; ++k) {
                int sum = arr[i] + arr[j] + arr[k];
                if (sum % 25 == 0) {
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
            }
        }
    }
}

int main(){

    const int N = 7;
    int arr[N];

    srand(time(0));

    for (int i = 0; i < N; ++i) {
        arr[i] = rand() % 50;
    }

    cout << "Cac bo 3 so nguyen co tong chia het cho 25:" <<endl;
    print(arr, N);

    return 0;
}
