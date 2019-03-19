#include<iostream>

using namespace std;

int main()
{
	int *pointer;


	pointer=new int;

	*pointer=10;    // 10 value is allocate run time .

	cout<<"number for allocate the memory "<<*pointer;

	return 0;

}
/*
 * OUTPUT
 number for allocate the memory 10
 */
