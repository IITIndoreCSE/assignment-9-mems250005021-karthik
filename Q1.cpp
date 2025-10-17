#include <iostream>
using namespace std;

// Define structure Item
struct Item {
    int id;
    float cost;
};

int main() {
    // Declare an array of 6 Item structures
    Item items[6] = {
        {1, 45.50},  // First element with id=1 and cost=45.50
        {2, 60.75},  // Second element with id=2 and cost=60.75
        {3, 32.30},  // Third element with id=3 and cost=32.30
        {4, 120.50}, // Fourth element with id=4 and cost=120.50
        {5, 49.99},  // Fifth element with id=5 and cost=49.99 (initialized later)
        {6, 75.00}   // Sixth element with id=6 and cost=75.00 (initialized later)
    };

    // Use a for loop to iterate through the array and display items with cost > 50.00
    cout << "Items with cost greater than 50.00:" << endl;
    for (int i = 0; i < 6; i++) {
        if (items[i].cost > 50.00) {
            cout << "Item ID: " << items[i].id << ", Cost: " << items[i].cost << endl;
        }
    }

    return 0;
}

