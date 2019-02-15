/*
   The below program  default constructor is not written by developer  
   The compiler automatically initialize default constructor . 
*/

#include<iostream>

using namespace std;


class default_constructor
{

private :

	int number;


public:

	void print()
	{
		cout << "value of number= "<<number<<endl;             /* warning: 'object.default_constructor::number'
												                                  is used uninitialized in this function [-Wuninitialized]
		 	 	 	 	 	 	 	 	 	 	                                   */

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
