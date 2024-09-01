#include <iostream>

using namespace std;

int main() {
    int a = 1;
    int b = 2;
    int temp = 0;

    temp = a;
    a = b;
    b = temp;

    cout << a;

    return 0;
}