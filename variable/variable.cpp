 /*
  * A variable in any programming language is a named piece of computer memory which
  * containing some information inside.. source https://en.wikiversity.org/wiki/Types_and_variables
  * The variable is not fixed its change .
  * At declaration the variable is store garbage value .
  * garbage value  means waste or unused values .
  * 		ROULE OF VARIABLE
  * 1.variable can't have same name .
  * 2.variable can't start form number .
  * 3.variable can't use special character , keyword .
  * 4.variable name can't  use space .
  * 5.variable name should be self description .
  * 6. Hungarian Notation is use for variable name .
  *    Hungarain notation means information about the variable in its name
  *    such as data type whether its reference or constant variable .
  *
  */

#include <iostream>

using namespace std ;

int main()

{

	int inumber;									  // declaration of variable .

	inumber=10;									    // Initialization of variable .

	cout << inumber << endl;        // give the value which is store initially .
	cout << &inumber << endl;       // give the address of variable .

	return 0;

}
/*
OUTPUT
10
0x23fe1c
*/
