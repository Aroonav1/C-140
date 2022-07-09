// Class: CMSC140
// Instructor: Margaret Tseng
// Description: Common Programming Project 3
// Program Name: commonproject3.cpp
// Due: 11/04/2019
// Platform/Compiler: Windows 7, Microsoft Visual Studio 2013
/* I pledge that I have completed the programming assignment independently.
 I have not copied the code from a student or any source.
 I have not given my code to any student.
 
 Print your Name here: Aroonav Pradhan
 */

// Input:
//  1. hotel location, number of floors, number of rooms on each floor,  type of rooms on each floor.
// Output:
//  1. Hotel income, location, occupancy rate, number of unoccupied rooms, number of occupied rooms.
// Process/Algorithm:
//  1. calculate the occupancy rate.
//  2. calculate hotel income with rates and room type.
//  3. calculate the total number of unoccupied rooms.

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int i, floors, rooms[30], singleRoom[10], doubleRoom[10], king[10], suite[10];
    string location;
    float totalRooms = 0.0;
    int singleRate = 60, doubleRate = 75, kingRate = 100, suiteRate = 150;
    int unoccupied, min;
    double occupied_rooms = 0, income = 0, occupancy_rate;
    int sum = 0;
    int r = 1;
    min = rooms[1];

    cout << "The Blue Mont hotel has the following type of rooms: \nSingle room: $60/night \nDouble room: $75/night \nKing room  : $100/night \nSuite room : $150/night " << endl;
    cout << " Enter the location of the hotel chain: ";
    getline(cin,location);
   
    
    cout << " Enter the total number of floors of the hotel: ";
    cin >> floors;
    while (floors <= 0 || floors > 5)
    {
       
        cout << " Number of floors must be between 1 and 5." << "\nPlease re-enter: ";
        cin >> floors;
    }
    for (int i = 1; i <= floors; i++)
    {
            cout << " Enter the number of rooms on floor " << i << ": ";
            cin >> rooms[i];
        
        while (rooms[i] <= 0 || rooms[i] > 30)
        {
            cout << " Number of rooms on floor must be between 1 and 30. Please try again!! " << endl;
            cout << " Enter the total number of rooms in floor " << i << ": ";
            cin >> rooms[i];
            
        }
        cout << " How many SINGLE rooms are occupied in floor " << i << ": ";
        cin >> singleRoom[i];
        cout << " How many DOUBLE rooms are occupied in floor " << i << ": ";
        cin >> doubleRoom[i];
        cout << " How many KING rooms are occupied in floor " << i << ": ";
        cin >> king[i];
        cout << " How many SUITE rooms are occupied in floor " << i << ": ";
        cin >> suite[i];
        sum = singleRoom[i] + doubleRoom[i] + king[i] + suite[i];
        
        while (sum > rooms[i])
        {
            cout << "Total number of occupied rooms exceeds the total number of rooms on this floor. Please try again!!";
            sum = 0;
            cout << "\nEnter total number of rooms in floor " << i << ": ";
            cin >> rooms[i];
            while (rooms[i] <= 0 || rooms[i] > 30)
            {
                cout << " The number of rooms should be between 1 and 30. Please try again!!" << endl;
                cout << " Enter total number of rooms in floor " << i << ": ";
                cin >> rooms[i];
                
            }
            cout << " How many SINGLE rooms are occupied in floor " << i << ": ";
            cin >> singleRoom[i];
            cout << " How many DOUBLE rooms are occupied in floor " << i << ": ";
            cin >> doubleRoom[i];
            cout << " How many KING rooms are occupied in floor " << i << ": ";
            cin >> king[i];
            cout << " How many SUITE rooms are occupied in floor " << i << ": ";
            cin >> suite[i];
            sum = singleRoom[i] + doubleRoom[i] + king[i] + suite[i];
            
        
        }
        
    }
    
    cout << right << setw(40) << " Bluemont Hotel located in " << location << endl;
    cout << right << setw(40) << " Today's ROOM RATES are: " << endl;
    cout << right << setw(20) << "\nSingle Room: $60" << setw(20) << "\nDouble Room: $75" << setw(20) << "\nKing Room: $100" << setw(20) << "\nSuite Room: $150";
    
    
    for (i = 1; i <= floors; i++)
    {
        income = income + (singleRoom[i] * singleRate) + (doubleRoom[i] * doubleRate) + (king[i] * kingRate) + (suite[i] * suiteRate);
        totalRooms = totalRooms + rooms[i];
        occupied_rooms = occupied_rooms + singleRoom[i] + doubleRoom[i] + king[i] + suite[i];
    
    }
    unoccupied = totalRooms - occupied_rooms;
    occupancy_rate = (occupied_rooms / totalRooms) * 100;
    cout << "\n" << right << setw(35) << " Hotel Income: " << right << setw(10) << "$" << income;
    cout << "\n" << right << setw(35) << " Total # of Rooms: " << right << setw(10) << totalRooms;
    cout << "\n" << right << setw(35) << " Total # of Occupied Rooms: " << right << setw(10) << occupied_rooms;
    cout << "\n" << right << setw(35) << " Total # of Unoccupied Rooms: " << right << setw(10) << unoccupied;
    cout << "\n" << right << setw(35) << " Occupancy Rate: " << right << setw(10) << occupancy_rate << "%" << endl;

    for (i=2; i <= floors; i++)
    {
        if (rooms[i] < min)
        {
            min = i;
            r =i;
        }
        
    }
    cout << r << "\nFloor with " << rooms[r] << " rooms, has the least # of rooms." << endl;
    if (occupancy_rate < 60)
    {
        cout << " Need to improve Hotel Occupancy Rate!!! \n";
    }
    cout << "\nThank You for testing my program!!";
    cout << "\nPROGRAMMER: AROONAV PRADHAN";
    cout << "\nCMSC140 Common Project 3";
    cout << "\nDue Date: 11/04/2019";
    system("pause");
    
    return 0;
}



