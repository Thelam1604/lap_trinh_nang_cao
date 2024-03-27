#include <iostream>

using namespace std;

void print(char arr[2][12]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 12; ++j) {
            cout <<static_cast<int>(arr[i][j]) << " ";
        }
        cout << endl;
    }
}

int main() {

    char daytab1[2][12] = {
        {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
    };

    char daytab2[2][12] = {
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,
        31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    };


    char daytab3[2][12] = {
        {31, 28, 31, 30, 31, 30, 31, 31},
        {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
    };


    char daytab4[][12] = {
        {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
    };

    print(daytab1);
    print(daytab2);
    print(daytab3);
    print(daytab4);

    return 0;
}
