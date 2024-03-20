#include <iostream>
using namespace std;
int i = 50;

int main() {
    
    int i = 60;
    
    cout << "Local variable x: " << i << endl;

    cout << "Global variable x: " << ::i << endl;

    return 0;
}
