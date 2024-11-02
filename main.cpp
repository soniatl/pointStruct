//
//  main.cpp
//  pointStruct
//
//  Created by Sonia Lopchan on 11/1/24.
//
#include <iostream>
#include "pointStruct.hpp"

using namespace std;

int main() {
    Point p1(3, 4);
    Point p2(3, 4);
    Point p3(5, 6);

    // Display equality results directly
    cout << "p1 and p2 are " << (p1 == p2 ? "equal." : "not equal.") << endl;
    cout << "p1 and p3 are " << (p1 == p3 ? "equal." : "not equal.") << endl;

    // Display points using overloaded << operator
    cout << "Point p1: " << p1 << endl;
    cout << "Point p2: " << p2 << endl;
    cout << "Point p3: " << p3 << endl;

    return 0;
}
