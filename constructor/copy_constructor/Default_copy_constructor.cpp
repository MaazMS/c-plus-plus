#include<iostream>

using namespace std;

class copy_constructor
{
private:

	int number1,number2;

public:


	copy_constructor(int x,int y)     // parameterized constructor .
	{

			number1=x;
			number2=y;

	}


	void display()
	{

		cout<<"value of first number "<<number1<<endl;
		cout<<"value of second number "<<number2<<endl;

	}

};

int main()
{
	copy_constructor object1(10,20);          // call  parameterized constructor .

	copy_constructor object2(object1) ;       // object2 copy the value of object1

	copy_constructor object3=object1 ;			 // object3 copy the value of object1


	object1.display();
	object2.display();
	object3.display();

	return 0 ;

}
/*
 * OUTPUT
value of first number 10
value of second number 20
value of first number 10
value of second number 20
value of first number 10
value of second number 20
 
 */
