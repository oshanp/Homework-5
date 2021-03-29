// Fig. 8.13: fig08_13.cpp
// Selection sort with pass-by-reference. This program puts values into an 
// array, sorts them into ascending order and prints the resulting array.
#include <iostream> 
#include <iomanip>
using namespace std;

template <typename T>
void selectionSort( T * const, const int ); // prototype

template <typename S>
void swap( S * const, S * const ); // prototype


// function to sort an array
template <typename T>
void selectionSort( T * const array, const int size )
{
   int smallest; // index of smallest element

   // loop over size - 1 elements
   for ( int i = 0; i < size - 1; ++i )
   {
      smallest = i; // first index of remaining array

      // loop to find index of smallest element
      for ( int index = i + 1; index < size; ++index )

         if ( array[ index ] < array[ smallest ] )
            smallest = index;

      swap( &array[ i ], &array[ smallest ] );
   } // end if
} // end function selectionSort

// swap values at memory locations to which
// element1Ptr and element2Ptr point
template <typename S>
void swap( S * const element1Ptr, S * const element2Ptr )
{
   S hold = *element1Ptr;
   *element1Ptr = *element2Ptr;
   *element2Ptr = hold;
} // end function swap

int main()
{
   //integer sort
   const int arraySize = 10;
   int a[ arraySize ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

   cout << "Data items in original order\n";

   for ( int i = 0; i < arraySize; ++i )
      cout << setw( 4 ) << a[ i ];

   selectionSort( a, arraySize ); // sort the array

   cout << "\nData items in ascending order\n";

   for ( int j = 0; j < arraySize; ++j )
      cout << setw( 4 ) << a[ j ];

   cout << endl;
   
   //float sort
   const int arraySize2 = 10;
   float a2[ arraySize2 ] = { 2.1, 6.68, 4.60, 8.42, 10.12, 12.21, 89.02, 6.8, 4.05, 3.073 };

   cout << "Data items in original order\n";

   for ( int i = 0; i < arraySize2; ++i )
      cout << setw( 8 ) << a2[ i ];

   selectionSort( a2, arraySize2 ); // sort the array

   cout << "\nData items in ascending order\n";

   for ( int j = 0; j < arraySize2; ++j )
      cout << setw( 8 ) << a2[ j ];

   cout << endl;
   
   return 0;
   
} // end main

/**************************************************************************
 * (C) Copyright 1992-2012 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/

