// Kunsel_Chodak_Assignment 1 B.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    //Defining variable radius
    double radius;

    //Asking for radius
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    //The assignment says to use 3.14, but doesn't cmath have pie as well?
    double area = 3.14 * pow(radius, 2.0);
    double circumference = 2.0 * 3.14 * radius;
    double volume = (4.0/3.0) * 3.14 * pow(radius, 3.0);
    double surface_area = 4.0 * 3.14 * pow(radius, 2.0);

    //Outputting results
    cout << "Area: " << area << "\n";
    cout << "Circmference: " << circumference << endl;
    cout << "Volume: " << volume << endl;
    cout << "Surface Area: " << surface_area << endl;

    

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
