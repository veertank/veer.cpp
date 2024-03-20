#include<iostream>
using namespace std;

class convert {
public:
double cm;

double cmtom(){
return cm * 0.01; 
}
double cmtokm(){
return cm * 0.00001;
}
double cmtoft(){
return cm * 0.0328;
}
double cmtoin(){
return cm * 0.3937;
}
};
int main()
{ 
 convert v1;
double a,b,c,d;
    cout << "Enter Value in centimetre: " << endl;
    cin >> v1.cm;
    a = v1.cmtom();
    b = v1.cmtokm();
    c = v1.cmtoft();
    d = v1.cmtoin();
    cout << "CM to Meter is: " << a << endl;
    cout << "CM to Kilometre is: " << b << endl;
    cout << "CM to Feet is: " << c << endl;
    cout << "CM to Inches is: " << d << endl;
    return 0;
}
