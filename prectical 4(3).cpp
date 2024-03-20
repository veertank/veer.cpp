#include <iostream>
using namespace std;

double areaOfCircle(double r, double pi = 3.14) {
    return pi * r * r;
}

int main() {
    double r;
    cout << "Enter the radius of the circle: ";
    cin >> r;

    double area = areaOfCircle(r);
    cout << " area of the circle is: " << area << endl;

    return 0;
}
