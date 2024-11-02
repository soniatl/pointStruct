#include "pointStruct.hpp"

namespace std {

// Constructor
Point::Point(int x, int y) : x(x), y(y) {}

// Overload the equality operator (==)
// Returns 1 if equal, 0 otherwise
int Point::operator==(const Point& other) const {
    return (x == other.x && y == other.y);
}

// Overload the stream insertion operator (<<)
std::ostream& operator<<(std::ostream& os, const Point& point) {
    os << "(" << point.x << ", " << point.y << ")";
    return os;
}

}

