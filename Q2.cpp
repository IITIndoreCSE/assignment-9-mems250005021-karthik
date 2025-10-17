
#include <iostream>
using namespace std;

// Define the Color structure
struct Color {
    int red;
    int green;
    int blue;
};

int main() {
    // Declare and initialize an array of 5 Color structures with sample RGB values
    Color colors[5] = {
        {100, 150, 200}, // Color 1
        {50, 200, 255},  // Color 2
        {255, 0, 0},     // Color 3
        {0, 255, 0},     // Color 4
        {0, 0, 255}      // Color 5
    };

    // Invert the RGB values of the first 3 elements
    for (int i = 0; i < 3; i++) {
        colors[i].red = 255 - colors[i].red;
        colors[i].green = 255 - colors[i].green;
        colors[i].blue = 255 - colors[i].blue;
    }

    // Display the new RGB values for all 5 elements
    cout << "New RGB values for all colors:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Color " << i + 1 << " - Red: " << colors[i].red
             << ", Green: " << colors[i].green
             << ", Blue: " << colors[i].blue << endl;
    }

    return 0;
}
