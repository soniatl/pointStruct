#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>

namespace std {

struct Point {
    int x;
    int y;

    // Constructor
    Point(int x = 0, int y = 0);

    // Overload the equality operator (==)
    int operator==(const Point& other) const;

    // Overload the stream insertion operator (<<)
    friend std::ostream& operator<<(std::ostream& os, const Point& point);
};

}

#endif // POINT_HPP

