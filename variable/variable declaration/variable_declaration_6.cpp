/*
There are seven (7) ways to declare variable . This sixth way to declare variable.
*/#include <iostream>

using namespace std ;

int main()
{
/*
It is also declare .

  auto int inumber;
  inumber={10}; 
  
  programming is run .
   warning: 'auto' changes meaning in C++11; please remove it [-Wc++0x-compat]
	 warning: extended initializer lists only available with -std=c++11 or -std=gnu++11
*/
  auto int inumber={10};    //warning: 'auto' changes meaning in C++11; please remove it [-Wc++0x-compat]
  
  cout << inumber << endl; 
  cout << &inumber << endl; 
  
  return 0;

}
/*
OUTPUT
10
0x23fe1c

*/
