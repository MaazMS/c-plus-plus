#include <iostream>

using namespace std; 

bool even_odd(int no);    // declaration of function even_odd to check even and odd number.

int main()
{
	int number; 
	bool check=true; 

	cout << "Enter the number" ; 
	cin >>number;
	check=even_odd(number); 	// pass number to even_odd function 
	
	if(check) 			// check contain true or false 
          cout <<"number is even";
	else
 	  cout <<"number is odd"; 
	
	return 0;
}

bool even_odd(int no)
{
	bool test;
	
	if(no%2==0)
		test=true;
	else 
		test=false;
	
	return test;    // test  return true or false 
}
/*OUTPUT 
Enter the number3
number is odd */
