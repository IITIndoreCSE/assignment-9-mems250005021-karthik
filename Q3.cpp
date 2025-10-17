#include <iostream>
using namespace std;

// Define structure Point
struct Point {
    float x;
    float y;
};

int main() {
    // Declare an array of 7 points
    Point points[7];
    
    // Read coordinates of 7 points from user input
    cout << "Enter coordinates for 7 points (x, y):" << endl;
    for (int i = 0; i < 7; i++) {
        cout << "Point " << i + 1 << " - x: ";
        cin >> points[i].x;
        cout << "Point " << i + 1 << " - y: ";
        cin >> points[i].y;
    }

    // Count the number of points in the first quadrant
    int countFirstQuadrant = 0;
    for (int i = 0; i < 7; i++) {
        if (points[i].x > 0 && points[i].y > 0) {
            countFirstQuadrant++;
        }
    }

    // Output the result
    cout << "Number of points in the first quadrant: " << countFirstQuadrant << endl;

    return 0;
}

