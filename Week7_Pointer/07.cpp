#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char *argv[]) {

    if (argc != 3) {
        cerr << argv[0] << endl;
        return 1;
    }


    const char* str1 = argv[1];
    const char* str2 = argv[2];

    int count = 0;
    size_t str1_len = strlen(str1);
    size_t str2_len = strlen(str2);

    for (size_t i = 0; i <= str2_len - str1_len; ++i) {

        if (strncmp(str2 + i, str1, str1_len) == 0) {
            count++;
        }
    }


    cout << count << endl;

    return 0;
}
