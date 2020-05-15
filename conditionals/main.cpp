#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int num = 81; // Variable
    float num1 = 9.432; // Variable
    int x = sqrt(num); // Turn the variable to the square root of the variable
    int y = round(num1); // Turn the variable to the aproximity of the variable
    cout << x << endl; // Show the variable x
    cout << y << endl; // Show the variable y
    if (x==9){ // If x was equal to 9
        cout << "TRUE" << endl; // Show true
    } else if (x==8){ // else if the x was equal to eight
        cout << "NOPE" << endl; // Show nope
    } else { // If not
        cout << "FALSE" << endl; // Show False
    }

    if (y == 10){ // If the variable y was equal to ten
        cout << "FALSE" << endl; // show false
    } else if (y == 9){ // if the variable y was equal to nine
        cout << "TRUE" << endl; // Show the output true
    } else { // If not
        cout << "ERROR" << endl; // Print out error
    }
}
