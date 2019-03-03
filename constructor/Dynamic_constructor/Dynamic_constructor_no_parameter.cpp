
// // dynamic constructor with no parameter .

#include<iostream>

using namespace std;

class dynamic_constructor
{
private :

	int *pointer;

public:
	
	dynamic_constructor()				// dynamic constructor with no parameter .
	{

		pointer=new int;
		*pointer=100;

	}


	int display()
	{

		return *pointer;

	}

};

int main()
{

	dynamic_constructor object;
	
	cout<<"The value of dynamic constructor variable pointer";
	
	
	// call member function and display the value of function without cout in the display function 
	
	cout<<object.display();				

	return 0;
}
/*
  OUTPUT
  
 The value of dynamic constructor variable pointer100
 
 */
