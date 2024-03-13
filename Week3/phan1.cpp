#include <bits/stdc++.h>

using namespace std;
struct Point {
    int x, y;
Point() {}
 Point(int x1, int y1){
 x=x1;
 y=y1;
 }
};
// truyen tham tri
void print(Point p) {
    cout << "(" << p.x << ", " << p.y << ")" << endl;
}
// truyen tham bien
Point mid_point(const Point& p1, const Point& p2) {
    Point mid;
    mid.x = (p1.x + p2.x) / 2;
    mid.y = (p1.y + p2.y) / 2;
    return mid;
}

int main() {
    Point p1(1,2), p2(5,9), p3(28,2);
    print(p1);

    Point mid = mid_point(p2, p3);
    print(mid);

    return 0;
}
