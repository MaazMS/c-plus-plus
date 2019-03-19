#include<iostream>

using namespace std;

int main()
{
	int number;

	int *pointer;

	cout<<"Enter the size for allocate the memory at run time";
	cin>>number;

	pointer=new int [number];  //warning: 'number' is used uninitialized in this function [-Wuninitialized]

	for (int i=0;i<number;i++)
	{
		cout<<"Enter the size for allocate the memory at run time "<<i+1<<endl;
		cin>>*(pointer+i);
	}

	for(int i=0;i<number;i++)
	{
		cout<<"number for allocate the memory "<<i+1<<endl;
		cout<<*(pointer+i)<<endl;
	}

	return 0 ;
}


/*
 * OUTPUT
Enter the size for allocate the memory at run time2
Enter the size for allocate the memory at run time 1
1
Enter the size for allocate the memory at run time 2
2
number for allocate the memory 1
1
number for allocate the memory 2
2
*/
