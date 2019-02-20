//  The user is not assign the value of data member for default constructor the is print garbage value .

#include<iostream>

using namespace std;


class default_constructor
{

private :

	int number;


public:

	default_constructor()				    // warning: statement has no effect [-Wunused-value]
	{

		number;					     // warning: statement has no effect [-Wunused-value]

	}
  
  
	void print()
	{
		cout << "value of number= "<<number<<endl;        /* warning: 'object.default_constructor::number'
								  is used uninitialized in this function [-Wuninitialized] */

		cout << "value of number= "<<&number<<endl;
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
value of number= 4198400
value of number= 0x23fe10

*/
