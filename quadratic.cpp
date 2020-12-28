#include <iostream>
#include <math.h>
using namespace std;

/*The purpose of this program is to retrieve three numerical values from the user,
and subsequently calculate two possible values of the values' quadratic equation
using the quadratic formula.
The rough outline of this code is as follows:
1. Retrieve a, b, and c float values from user using cin
2. Translate the standard (-b +/- sqrt(note: search up command for square root) of b^2-4ac)/2a
   in C++ code
 a. This will likely have to be divided into two parallel functions, one for the
    positive outcome and one for the negative outcome
3. Calculate like normal up to the point of separation, at which point the variables
   will be preserved and the pos and neg values will be calculated simultaneously.
 */

float a;
float b;
float c;
float acpro;
float b2;
float squareroot;
float twoa;
float negb;
float negans;
float posans;

int main(){
    cout << "Welcome to the Quad Rats Inc. Handy-Dandy (TM) Rudimentary Quadratic Formula Calculator in C++. \n";
    cout << "At Quad Rats Inc., we recognize the importance of minimizing efficiency while maximizing service complexity, \n";
    cout << "in order to create as inconvenient of an experience as possible. =D \n";
    cout << "In this module, we present to you our Handy-Dandy (TM) Rudimentary Quadratic Formula Calculator in C++. \n";
    cout << "To begin, please follow the instructions onscreen. \n";
    cout << endl;
    cout << "ENTER YOUR 'a' VALUE: ";
    cin >> a;
    cout << "ENTER YOUR 'b' VALUE: ";
    cin >> b;
    cout << "ENTER YOUR 'c' VALUE: ";
    cin >> c;
    acpro = (4*a*c);
    //cout << acpro << endl;
    b2 = (b*b);
    //cout << b2 << endl;
    squareroot = (b2 - acpro);
    cout << endl;
    //cout << squareroot << endl;
    squareroot = sqrt(squareroot);
    //cout << squareroot;
    negb = (0 - b);
    twoa = (2*a);
    negans = (negb - squareroot)/twoa;
    posans = (negb + squareroot)/twoa;
    cout << "Answer 1: " << negans << endl;
    cout << "Answer 2: " << posans << endl;
    return 0;
}