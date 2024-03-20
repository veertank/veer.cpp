
#include <iostream>
using namespace std;

int main(){
  
  double number1 ;
  double number2 ;
  double addition ; 
  double substraction ;
  double multiplication ;
  double division ;
    
    cout<<"Enter value of first number ";
    cin>>number1 ;
  
    cout<<"Enter value of second number ";
    cin>>number2;
    
    addition = number1 + number2 ;
    cout << "addition of num1 and num2 is "<<addition<<endl;
  
    substraction = number1 - number2 ;
    cout << "substraction of num1 and num2 is " <<substraction<< endl;
    
    multiplication = number1 * number2 ;
    cout << "multiplication of num1 and num2 is " <<multiplication<< endl;
  
    division = number1 / number2 ;
    cout << "division of num1 and num2 is " <<division<< endl;

return 0;
}
