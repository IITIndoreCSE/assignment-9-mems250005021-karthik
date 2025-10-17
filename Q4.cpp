
#include <iostream>
#include <string>
using namespace std;

// Define structure SalesRecord
struct SalesRecord {
    string month;
    float amount;
};

int main() {
    // Declare an array of 12 SalesRecord structures (one for each month)
    SalesRecord sales[12];

    // Input sales data for each month
    cout << "Enter sales data for each month:" << endl;
    for (int i = 0; i < 12; i++) {
        cout << "Month " << i + 1 << " Name: ";
        cin >> sales[i].month;
        cout << "Sales Amount: ";
        cin >> sales[i].amount;
    }

    // Initialize variables to find the month with maximum and minimum sales
    int maxIndex = 0, minIndex = 0;

    // Traverse the array to find the month with maximum and minimum sales
    for (int i = 1; i < 12; i++) {
        if (sales[i].amount > sales[maxIndex].amount) {
            maxIndex = i;  // Update max index if current month has more sales
        }
        if (sales[i].amount < sales[minIndex].amount) {
            minIndex = i;  // Update min index if current month has less sales
        }
    }

    // Display the results
    cout << "Month with maximum sales: " << sales[maxIndex].month 
         << " with amount " << sales[maxIndex].amount << endl;
    cout << "Month with minimum sales: " << sales[minIndex].month 
         << " with amount " << sales[minIndex].amount << endl;

    return 0;
}
