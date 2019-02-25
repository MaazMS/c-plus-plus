#include<iostream>

using namespace std;


class parameterized_constructor
{

private:


	int first_number,second_number;

public:


	parameterized_constructor(int number1,int number2)             //parameterized_constructor function
	{

		first_number=number1;
		second_number=number2;

	}


	void display()
	{

		cout<<"first number is = "<<first_number<<endl;

		cout<<"second number is ="<<second_number<<endl;

	}

};


int main()
{

// Implicit call of parameterized_constructor to passing the argument through object

	parameterized_constructor object(10,20);     
	
	object.display();

	return 0;

}
/*
 * OUTPUT
first number is = 10
second number is =20
 
 */
