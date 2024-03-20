#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double km;
    cout << "Enter distance in km: ";
    cin >> km;

    double cm = km * 100000; 
    double meter = km * 1000; 
    double inch = km * 39370.1; 
    double feet = km * 3280.84; 

    cout << setfill('.') << setw(20) << "Distance in centimeters: " << setprecision(2) << fixed << cm << endl;
    cout << setfill('.') << setw(20) << "Distance in meters: " << setprecision(2) << fixed << meter << endl;
    cout << setfill('.') << setw(20) << "Distance in inches: " << setprecision(2) << fixed << inch << endl;
    cout << setfill('.') << setw(20) << "Distance in feet: " << setprecision(2) << fixed << feet << endl;

    return 0;
}
