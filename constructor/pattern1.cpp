//C++ Program to print Inverted half pyramid using * (asterisk) pattern
 
#include <iostream>
using namespace std;
 
int main()
{
   int i, j, row;
 
   cout << "Enter number of rows: ";
   cin >> row;
    
   // outer loop is responsible for rows
   for(i = row; i >= 1; i--)
   {
       
      //inner loop is responsible for columns
      for(j = 1; j <= i; j++)
      {
         cout << "* ";
      }
       
      // give line breaks after ending every row
      cout << "\n";
   }
 
   return 0;
}
