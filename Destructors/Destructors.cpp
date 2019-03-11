#include<iostream>

using namespace std;

class destructor
{
	
	private:
	
			int number;
			
			
	public:
			
			
			destructor()	// constructors
			{

				number=10;
				cout<<"The value of number is allocating by default constructor is := "<<number<<endl;
				
			}
			
			

			~ destructor()	// Destructor
			{
				
				cout<<"The number is deallocate by the  destructors is : ="<<number<<endl;
				
			}


};

int main()
{
	destructor object; 

	return 0 ;
}

/*
 * OUTPUT
 The value of number is allocating by default constructor is := 10
 The number is deallocate by the  destructors is : =10
 
 */
