/* Default constructor
 * If developer is not create the default constructor than compiler automatically initialize default constructor .
 * It does not take any argument .
 * It is also called as non-parameterize  constructor .
 * The user is not assign the value of data member for default constructor the is print garbage value .
*/


#include<iostream>

using namespace std;


class default_constructor
{

private :

	int number;


public:

	default_constructor()
	{

		number=10;								// value assign by user

	}
  
  
	void print()
	{
  
		cout << "value of number= "<<number<<endl;
		
	}


};


int main()
{

	default_constructor object;

	object.print();

	return 0 ;
  
}
/*
OUTPUT

value of number= 10

*/
