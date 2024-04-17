#include <iostream>

using namespace std;
bool binarySearchIterative(int* arr, int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return true;
        } else if (target < arr[mid]) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return false;
}

int main() {
    int n;
    cin >>n;
    int arr[n];

    for(int i=0;i < n;i++)
    {
        cin >>arr[i];
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    cin >> target;

    bool found = binarySearchIterative(arr, size, target);

    if (found) {
        cout << "Yes"<<endl;
    } else {
        cout << "No"<<endl;
    }

    return 0;
}
