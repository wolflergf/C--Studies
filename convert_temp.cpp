#include <iostream>

using namespace std;

int main() {

    cout << "Enter a Fahrenheit temp to convert to Celsius: ";
    double fahrenheit;
    cin >> fahrenheit;

    double celsius;
    celsius = (fahrenheit - 32) / 1.8;

    cout << celsius << "C";

    return 0;
}