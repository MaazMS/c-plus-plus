// create array array and store the value at run time .

#include<iostream>

using namespace std;

class dynamic_constructor
{
private :

	int number;
	int start;
	int *pointer;

public:

	dynamic_constructor(int parameter_number)				// dynamic constructor with parameter .
	{

		number=parameter_number;		// parameter number is assign the value of class data member number .

		pointer=new int[number];		// Run time memory allocation using new operator .


	}


	void accept()
	{

		for(start=0;start<number;start++)
		{

			cin>>pointer[start];				// Array of variable name pointer

		}

	}


	void display()
	{
		cout<<"display array number";

		for(start=0;start<number;start++)
		{

			cout<<pointer[start]<<endl;

		}

	}

};

int main()
{
	int number_parameter;

	cout<<"enter the size of array  using dynamic parameter";
	cin>>number_parameter;

	dynamic_constructor object(number_parameter);

	object.accept();
	object.display();

	return 0;

}
/*
 * OUTPUT

enter the size of array  using dynamic parameter3
1
2
3
display array number1
2
3
*/
