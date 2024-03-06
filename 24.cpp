#include <iostream>
using namespace std;
int main() {
    int day, month, year;
    cin >> day;
    cin >> month;
    cin >> year;
    int dayOfWeek = (day += month < 3 ? month += 12, year-- : month) + year + year / 4 - year / 100 + year / 400 + (31 * month) / 12;

    switch (dayOfWeek % 7) {
        case 0:
            cout << "Sunday" << endl;
            break;
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        default:
            cout << "Ngày không hợp lệ" << endl;
    }

    return 0;
}
