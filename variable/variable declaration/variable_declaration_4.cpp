/*
There are seven (7) ways to declare variable . This fourth way to declare variable.
*/

#include <iostream>

using namespace std ;

int main()

{
  auto int inumber;                 // warning: 'auto' changes meaning in C++11; please remove it [-Wc++0x-compat]
	
  inumber=10;                      // Initialization of variable .
   
  cout << inumber << endl; 						
  cout << &inumber << endl;

	return 0;

}
/*
OUTPUT
10
0x23fe1c

*/
