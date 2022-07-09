// Class: CMSC140
// Instructor: Margaret Tseng
// Description:
// Program Name: classactivity12.cpp
// Due: 11/19/2019
// Platform/Compiler: Windows 7, Microsoft Visual Studio 2013
/* I pledge that I have completed the programming assignment independently.
 I have not copied the code from a student or any source.
 I have not given my code to any student.
 
 Print your Name here: Aroonav Pradhan
 */

// Input:
//  1.
// Output:
//  1.
// Process/Algorithm:
//  1.
//  2.
//  3.

#include <iostream>
#include <string>
#include <fstream>
using namespace std;
ofstream outFile;
//prototypes
void showMenu();
char getChoice();
void getNumber(double &num1, double &num2);
double Addition(double num1, double num2);
void displayResult(double result);
void showFile(string fileName);
void review(char &choice);

int main()
{
    char choice = ' ';
    do
    {
        review(choice);
        cout << " Menu choice selected is " << choice << endl;
    }
    while (choice != 'Q' && choice != 'q');
    
    return 0;
}
void review(char &choice)
{
    choice ='Q';
    double num1 = 0.0, num2 = 0.0;
    double result = 0.0;
    const string FILENAME = "operations.txt";
    string filename = FILENAME;
    outFile.open("operations.txt", ios::app);
    choice = getChoice();
    if (choice != 'Q' && choice != 'q' && choice != 'O' && choice != 'o')
    {
        getNumber(num1, num2);
        switch (choice)
        {
            case 'A':
            case 'a':
                result = Addition(num1, num2);
                break;
            case 'S':
            case 's':
                break;
            case 'M':
            case 'm':
                break;
            case 'D':
            case 'd':
                break;
            case 'Q':
            case 'q':
                break;
            case 'F':
            case 'f':
                break;
            default:
                cout << " No valid input entered. Bye!" << endl;
        }
        outFile.close();
        displayResult(result);
    
        }
        else
        {
    }
return;
}
void showMenu()
{
    cout << " Please enter your choice of operatio: " << endl;
    cout << " A - Addition " << endl;
    cout << " S - Subtraction " << endl;
    cout << " M - Multiplication " << endl;
    cout << " D - Division " << endl;
    cout << " O - Others " << endl;
    cout << " Q - Quit " << endl;
    cout << " Pleade enter your choice of operation (A, S, M, D, O, Q): ";
    return;
}
char getChoice()
{
    char choice = 'Q';
    showMenu();
    cin >> choice;
    while (choice != 'A' && choice != 'a' && choice != 'S' && choice != 's' && choice != 'M' && choice != 'm' && choice != 'D' && choice != 'd' && choice != 'O' && choice != 'o' && choice != 'Q' && choice != 'q')
    {
        showMenu();
        cin >> choice;
        
    }
    outFile << " The opertation choice selected is " << choice << "." << endl;
    return choice;

}

void getNumber (double &num1, double &num2)
{
    cout << "Enter your first number: ";
    cin >> num1;
    cout << " Enter your second number: ";
    cin >> num2;
    
    outFile << " The two numbers entered are " << num1 << " and " << num2 << endl;
    return;
}
double Addition(double num1, double num2)
{
    double result = 0.0;
    static int counter = 0;
    counter++;
    cout << " -------------------------- " << endl;
    cout << " The Addition function runs " << counter << "time(s)." << endl;
    cout << " -------------------------- " << endl;
    result = num1 + num2;
    outFile << " The operation result is " << result << "." << endl << endl;
    return result;
}
    void displayResult(double result)
{
    cout << " The result of operation is " << result << endl;
    return;
    
}
void showFile(string fileName)
{
    ifstream inFile;
    string dataline = " ";
    inFile.open(fileName, ios::in);
    getline(inFile, dataline);
    cout << dataline << endl;
    inFile.close();
    return;
}
        

    

