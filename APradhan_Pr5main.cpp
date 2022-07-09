#include <iostream>
#include <iomanip>
using namespace std;

// Global constants
const int ROWS = 3; // The number of rows in the array
const int COLS = 3; // The number of columns in the array
const int MIN = 1; // The value of the smallest number
const int MAX = 9; // The value of the largest number

// Function prototypes
void showResult(int[][COLS]);
void showArray(int[][COLS]);
bool isMagicSquare(int[][COLS]);
bool checkRange(int[][COLS]);
bool checkUnique(int[][COLS]);
bool checkRowSum(int[][COLS]);
bool checkColSum(int[][COLS]);
bool checkDiagSum(int[][COLS]);

int main()
{
   
    int magicArray[ROWS][COLS];
    for(int i=0;i<ROWS;i++)
    {
        for(int j=0;j<COLS;j++)
        {
            cout<<"Enter values ROW "<<(i+1)<<" COL "<<(j+1)<<": " << endl;
        }
        cout<<endl;
    }
    for(int i=0;i<ROWS;i++)
    {
        for(int j=0;j<COLS;j++)
        {
            cin>>magicArray[i][j];
        }
    }
    
    showResult(magicArray);
    cout << "Programmar name: Aroonav Pradhan " << endl;
    cout << "Due Date: 12/13/2019 " << endl;
    cout << "Common Project 5 " << endl;
    return 0;
}

void showResult(int values[][COLS])
{
    // Determine if the array is a Lo Shu Magic Square.
    if (isMagicSquare(values))
    {
        // If so, display a message indicating that the array is a magic square.
        cout << "This is a Lo Shu magic square.\n\n";
    }
    else {
        // If not, display a message indicating that the
        // array is not a magic square.
        cout << "This is not a Lo Shu magic square.\n\n";
    }
}

void showArray(int values[][COLS])
{
   
    for (int row = 0; row < ROWS; row++)
    {
        for (int col = 0; col < COLS; col++)
        {
           cout << values[row][col] << " ";
        }
      
        cout << endl;
    }
}

bool isMagicSquare(int values[][COLS])
{
    
    bool status = false;
    
    bool isInRange = checkRange(values);
    
    bool isUnique = checkUnique(values);
    bool isEqualRows = checkRowSum(values);
    bool isEqualCols = checkColSum(values);
    bool isEqualDiag = checkDiagSum(values);
   
    if (isInRange && isUnique && isEqualRows && isEqualCols && isEqualDiag)
    {
       status = true;
    }
    
    return status;
}

bool checkRange(int values[][COLS])
{
    
    bool status = true;
    for (int row = 0; row < ROWS; row++)
    {
        for (int col = 0; col < COLS; col++)
        {
            
            if (values[row][col] < MIN || values[row][col] > MAX) {
        
                status = false;
            }
        }
    }
  
    return status;
}

bool checkUnique(int values[][COLS])
{
    int count = 0;
    int num = 1;
    bool status = true;
    for (int i = 0; i < ROWS; i++)
    {
    
        for (int j = 0; j < COLS; j++)
        {
            if (values[i][j] == num)
                count++;
        }
        if (count > 1)
            status = false;
        num++;
    }
    
    return status;
}

bool checkRowSum(int values[][COLS])
{
  
    bool status = true;
    // Calculate the sum of the values in the first row.
    int sumRowA = values[0][0] + values[0][1] + values[0][2];
    // Calculate the sum of the values in the second row.
    int sumRowB = values[1][0] + values[1][1] + values[1][2];
    // Calculate the sum of the values in the third row.
    int sumRowC = values[2][0] + values[2][1] + values[2][2];
    // Determine if the sum of the columns is not equal.
    if ((sumRowA != sumRowB) || (sumRowA != sumRowC) || (sumRowB != sumRowC))
    {
    
        status = false;
    }
  
    return status;
}
bool checkColSum(int values[][COLS])
{
 
    bool status = true;
    // Calculate the sum of the values in the first column.
    int sumColA = values[0][0] + values[1][0] + values[2][0];
    // Calculate the sum of the values in the second column.
    int sumColB = values[0][1] + values[1][1] + values[2][1];
    // Calculate the sum of the values in the third column.
    int sumColC = values[0][2] + values[1][2] + values[2][2];
    // Determine if the sum of the columns is not equal.
    if ((sumColA != sumColB) || (sumColA != sumColC) || (sumColB != sumColC)) {
        // If so, set status to false.
        status = false;
    }
 
    return status;
}


bool checkDiagSum(int values[][COLS])
{
    
    bool status = true;
    // Calculate the sum of the values in the first diagonal.
    int sumDiagA = values[0][0] + values[1][1] + values[2][2];
    // Calculate the sum of the values in the second diagonal.
    int sumDiagB = values[2][0] + values[1][1] + values[0][2];
    // Determine if the sum of the diagonals is not equal.
    if (sumDiagA != sumDiagB)
    {
      
        status = false;
    }
    return status;
}
