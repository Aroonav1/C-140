// Class: CMSC140
// Instructor: Margaret Tseng
// Description: Common Project IV
// Program Name:  commonproject4.cpp
// Due:
// Platform/Compiler: MacOS, X-Code-2017.
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
#include <fstream>
#include <iomanip>

using namespace std;

int NumOfEmployees();
int TotDaysAbsent(int, std::ofstream&);
double AverageAbsent(int,int);
int main()
{
    int num_emp_data = 0;
    int num_days_data = 0;
    double avg_abs_data = 0.0;
    ofstream myfile;
    num_emp_data = NumOfEmployees();
    myfile.open ("employeeAbsences.txt");
    num_days_data = TotDaysAbsent(num_emp_data, myfile);
    cout << endl;
    cout << "The " << num_emp_data << " employees were absent for a total number of "<< num_days_data << " days " << endl;
    myfile << endl << "The " << num_emp_data << " employees were absent for a total number of "<< num_days_data << " days " << endl;
    avg_abs_data = AverageAbsent(num_emp_data,num_days_data);
    cout << "The average number of days absent is: " << avg_abs_data << " days " << endl;
    myfile << "The average number of days absent is: " << avg_abs_data << " days " << endl;
    cout<<endl;
    return 0;
}
int NumOfEmployees()
{
    int num_emp1;
    cout << "Please enter the number of employees in the company: ";
    cin >> num_emp1;
    
    while(num_emp1 < 1)
    {
        cout << "INVALID, number of employees in a company must be > 1.";
        cout << "Please enter the number of employees in the company: " ;
        cin >> num_emp1;
    }
    return num_emp1;
}
int TotDaysAbsent(int e, std::ofstream& myfile)
{
    int num_emp1 = e;
    int num_days1;
    int total_days = 0;
    int id;
    if(myfile)
    {
        myfile << "EMPLOYEE ABSENCE REPORT " << endl;
        myfile << "employee id" << "\t\t" << "days absent" << endl;
    }
    for (int i = 0; i < num_emp1; i++)
    {
        cout << "Please enter an employee ID : " ;
        cin >> id;
        cout << "Please enter the number of days this employee was absent : ";
        cin >> num_days1;
        while(num_days1 < 0)
        {
            cout << "INVALID, the number of days missed must not be negative." << endl;
            cout << "Please enter the number of days this employee was absent : ";
            cin >> num_days1;
        }
        
        if(myfile){
            myfile << id << "\t\t\t" << num_days1 << endl;
        }
        
        total_days += num_days1;
    }
    
    return total_days;
}
double AverageAbsent(int e, int d)
{
    int num_emp2 = e;
    int num_days2 = d;
    double avg_abs1;
    
    avg_abs1 = num_days2/num_emp2;
    return avg_abs1;
    
}



