#include <iostream>
using namespace std;

int *n(int* a) {
    for(int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    return a;
}

int main() {
    int *a = new int;
    n(a);
    for(int i = 0; i < 5; i++) cout << *(a + i) << " ";
    return 0;
}
