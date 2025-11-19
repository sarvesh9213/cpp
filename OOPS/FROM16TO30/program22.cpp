#include <iostream>
#include <cmath>
using namespace std;

class Point {
protected:
    float x, y;

public:
    void read() {
        cout << "Enter x and y coordinates: ";
        cin >> x >> y;
    }

    void display() {
        cout << "Point = (" << x << ", " << y << ")" << endl;
    }
};

class Distance : public Point {
    float dist;

public:
    void findDistance() {
        dist = sqrt(x*x + y*y);
    }

    void showDistance() {
        cout << "Distance from origin = " << dist << endl;
    }
};

int main() {
    Distance d;

    d.read();
    d.display();
    d.findDistance();
    d.showDistance();

    cout << "\n-- Program by Sarvesh Pandey --\n";
    cout << "-- BRANCH: IT EVE SEM 3 --";
    return 0;
}
