#include <iostream>
using namespace std;

int main() {
    double sum = 0.0;  // Initialize the sum as a double to handle fractions
    for (int numerator = 1, denominator = 3; numerator <= 95; numerator += 2, denominator += 2) {
        sum += (double)numerator / denominator;  // Add the fraction to the sum
    }

    cout << "The sum of the series is: " << sum << endl;
    return 0;
}
