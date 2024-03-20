#include <iostream>
using namespace std;

void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int num1;
    int num2;

    cout<<"enter a value of num1 :";
    cin>>num1;

    cout<<"enter a value of num2 :";
    cin>>num2;

    cout << "Before swapping: " << endl;
    cout << "Num1 = " << num1 << ", Num2 = " << num2 << endl;

    swap(num1, num2);

    cout<< "After swapping : " << endl;
    cout << "Num1 = " << num1 << ", Num2 = " << num2 << endl;

    return 0;
}
