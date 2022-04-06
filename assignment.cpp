#include <iostream>
using namespace std;
int main() {
    float b, h, a;
    // b = base
    // h = height
    // a = area
    cout << "Enter the base & height of the triangle::\n";
    cin >> b >> h;
    // Calculate area of the triangle
    a = (float)((b * h) / 2);
    // Output
    cout << "\nArea of the triangle = " << a << " sq. units";
    return 0;
}


