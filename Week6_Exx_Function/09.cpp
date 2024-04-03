#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int randomLessThanN(int N) {

    srand(time(0));

    int randomNumber = rand() % N ;
    return randomNumber;
}

int main() {
    int N;
    cin >> N;

    int randomNumber = randomLessThanN(N);
    cout << "So ngau nhien nho hon " << N << " la: " << randomNumber << endl;

    return 0;
}
