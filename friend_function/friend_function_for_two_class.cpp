/*
 * friend function is use in c++ for access private data member to out side the class .
 * friend function declare inside the class . 
 * friend function  definition is written out the class.if friend definition class is written
 * in the class the error.
 * both friend function name of two class has same name. if both friend function name is different
 * then its error means not access the private member of the class.
 * n number of of argument pass in the friend function . friend function argument is the class name only
 * and class name is separate by comma symbol .
 * if pass n number of argument is friend function then every class declare at top of the class ( start of program) .
 * friend function have a prototype i.e void,int etc .
 *  
 */
 

#include <iostream>
using namespace std;


class two;											        // declare the class which pass by friend function .
class one
{

private:

	int first_number;
  
public:

	void accept()
	{
  
		cout<<"enter the value of first_number";
		cin>>first_number;

	}
  
	void dispaly()
	{
  
		cout<<"first_mumber="<<first_number<<endl;
    
	}
  
	friend int addition(one,two);                                    /*  friend function declaration .
	                                                                  class two declare globally .
	                                                                 same name of friend class and argument */
};



class two
{

private:

	int second_number;
  
public:

	void accept()
	{
  
		cout<<"enter the value of second_number";
		cin>>second_number;

	}
  
	void dispaly()
	{
  
		cout<<"second_mumber="<<second_number<<endl;
    
	}
  
	friend int addition(one,two);                                              /* friend function declaration .
	                                                                           same name of friend class and argument*/ 
};


int addition(one p,two q)                                                     //friend function definition.
{

	int sum;
	sum=p.first_number+q.second_number;
	return(sum);

}

int main()
{

	
	one x;
	two y;
	int total;

	x.accept();
	x.dispaly();
	y.accept();
	y.dispaly();

	total=addition(x,y);

	cout<<"addition of two number is="<<total;

	return 0;
}
/*
 * OUTPUT
 * 
 * enter the value of first_number2
first_mumber=2
enter the value of second_number3
second_mumber=3
addition of two number is=5
 */

