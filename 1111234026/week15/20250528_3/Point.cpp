#include "Point.h"

Point::Point(int x, int y) {
    this->x = x;
    this->y = y;
}

void Point::input(char name) {
    cout << "�п�J�I " << name << " ���y�СG\n";
    cout << name << "(X, Y): ";
    cin >> x >> y;
}

void Point::print(char name) const {
    cout << name << " (" << x << ", " << y << ")\n";
}

int Point::operator-(const Point& other) const {
    int dx = x - other.x;
    int dy = y - other.y;
    return sqrt(dx * dx + dy * dy);
}