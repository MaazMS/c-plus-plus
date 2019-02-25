#include<iostream>

using namespace std;


class default_constructor
{

private :

	int number;


public:

	default_constructor()
	{

		number=10;				// value assign by user

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
