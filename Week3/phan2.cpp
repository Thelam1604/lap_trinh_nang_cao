#include <bits/stdc++.h>

using namespace std;

struct Point {
 int x, y;
 point() {}
 point(int x1, int y1)
 {
     x=x1;
     y=y1;
 }
};
struct Rect {
 int x, y, w, h;
  Rect () {}
  Rect(int x1, int y1, int w1, int h1){
   x=x1;
   y=y1;
   w=w1;
   h=h1;
  }

bool contains(const Point& p) const {
    return (p.x >= x && p.x < x + w && p.y >= y && p.y < y + h);
}
};
struct Ship {
    Rect rect;
    string id;
    int dx, dy;

    void move() {
        rect.x += dx;
        rect.y += dy;
    }
};

void display(const Ship& ship) {
    cout << "Ship ID: " << ship.id << ", Location: (" << ship.rect.x << ", " << ship.rect.y << ")" << endl;
}

int main() {

    Ship ship1 = {{15, 10, 20, 20}, "474833335675", 1, 2};
    Ship ship2 = {{5, 5, 15, 10}, "95873934749", 2, 1};

    int loop = 0;
    while (loop < 10) {
        ship1.move();
        ship2.move();
        display(ship1);
        display(ship2);
        loop++;
    }

    return 0;
}
