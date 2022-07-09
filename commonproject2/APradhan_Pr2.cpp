// Class: CMSC140
// Instructor: Margaret Tseng
// Description: Create a converter toolkit
// Program Name: commonproject2.cpp
// Due:
// Platform/Compiler: MAC OS, X-Code 2017
/* I pledge that I have completed the programming assignment independently.
 I have not copied the code from a student or any source.
 I have not given my code to any student.
 
 Print your Name here: Aroonav Pradhan
 */

// Input:
// 1. A number for the menu in between 1 and 4.
// 2. Weight in kilograms, temperature in celsius, distance in kilometers.
// 3. Country name.
// Output:
// 1. Print distance in Miles, weight in pounds and temperature in fahrenheit.
// 2. Print Programmer name
// 3. Print Due date
// 4. Print Program description
// 5. Print Country name
// Process/Algorithm:
// 1. Calculate the distance (distance * 0.6)
// 2. Calculate the weight (weight * 2.2)
// 3. Calculate the temperature {(temp * 9/5) + 32}
// 4. If number not in between 1 and 4 then display the error message.
// 5. If number is 4 then end the program.

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string country;
    double number1 = 0.0;
    double number2 = 0.0;
    double number3 = 0.0;
    double number4 = 0.0;
    double result = 0.0;
    int choice;
    cout << " Please enter the name of a country: ";
    getline (cin, country);
    
    cout << " Selection from the following menu: " << endl;
    cout << " 1 (Temperature Converter) " << endl;
    cout << " 2 (Distance Converter) " << endl;
    cout << " 3 (Weight Converter) " << endl;
    cout << " 4 (Quit) " << endl;
    cout << " Your choice: ";
    cin >> choice;
    if (choice < 1)
    {
        cout << " === ERROR MEASSAGE === " <<endl;
        cout << endl << "=== Sorry, you did not enter a valid menu option. please rerun the program.!!! " << endl;
        cout << " =============== " << endl<<endl;
    }
    if (choice == 1)
    {
        cout << " Enter the temperature in celsius: ";
        cin >> number1;
    }
        else if (choice == 2)
        {
        cout << " \n Enter the distance in kilometers: ";
        cin >> number2;
        }
        else if ( choice == 3)
        {
        cout << " \n Enter the weight in kilograms: ";
        cin >> number3;
        }
        else if (choice == 4)
        {
            cout << " \nThe program has ended. ";
        }
      
        switch (choice)
        {
            case 1:
                result = (number1 * 9/5) + 32;
                cout << fixed << setprecision(0) << "The temperature in Fahrenheit is " << result << "F." << endl;
                break;
            case 2:
                result = ( number2 * 0.62);
                cout << fixed << setprecision(2) <<" The distance in miles is " << result << " miles." << endl;
                break;
            case 3:
                result = (number3 * 2.20);
                cout << fixed << setprecision(1) << " The weight in pounds is " << result << " lbs." << endl;
            case 4:
                cout << " The program has ended. " << endl;
                break;
        }
    cout << country << " sounds fun!" << endl;
    cout << " PROGRAMMER: Aroonav Pradhan " << endl;
    cout << " CMSC140: Common project 2 " << endl;
    cout << " Due Date: 10/14/19 " << endl;
   
    system("pause");
    return 0;
}
