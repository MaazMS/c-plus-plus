#include<iostream>

using namespace std;


int main()
{


	int * pointer;

	pointer=new int;    // allocate 2 bytes .

	cout<<"Enter the number for allocate the memory "<<endl;

	cin>>*pointer;

	cout<<"number for allocate the memory "<<*pointer<<endl;

	return 0;
}
/*
 * OUTPUT
 Enter the number for allocate the memory 
23
number for allocate the memory 23
*/
