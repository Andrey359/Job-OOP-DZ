
#include <iostream>

using namespace std;

class Point
{
public:
    int x, y;
    Point(int x, int y) {
        this->x = x;
        this->y = y;

    }
    Point operator+(Point& point) {
        return  Point(x + point.x, y + point.y)
    }
    Point operator-(const Point& point) const {
        return x - point.x;
    }
    Point operator*(const Point& point) const {
        return x * point.
    }
};
int main()
{
    Point a{ 2, 3 };
    a = a + a;
    cout << a.x;
}
