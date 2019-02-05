/*
There are seven (7) ways to declare variable . This third way to declare variable.
*/

#include <iostream>

using namespace std ;

int main()

{

	/*
  
   if use this step then it give  warning: extended initializer lists only available with -std=c++11 or -std=gnu++11
   int inumber ; 
   inumber={10};	
   
   */

   int 	inumber={10};								       // declaration and Initialization of variable .
   
  cout << inumber << endl; 						//warning: 'inumber' is used uninitialized in this function
	cout << &inumber << endl;

	return 0;

}
/*
OUTPUT
10
0x23fe1c
*/
