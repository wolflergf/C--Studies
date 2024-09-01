#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    const double pi = 3.14;
    cout << "Enter the R for de circle: ";
    double radius;
    cin >> radius;

    double area = pi * (pow(radius, 2));

    cout << "The circle area is: " << area;

    return 0;
}
