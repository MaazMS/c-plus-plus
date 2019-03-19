#include<iostream>

using namespace std;

int main()
{

	int *pointer;


	pointer=new int [4];

	for (int i=0;i<4;i++)
	{

		cout<<"Enter the number for allocate the memory "<<i+1<<endl;
		cin>>*(pointer+i);

	}

	for(int i=0;i<4;i++)
	{

		cout<<"number for allocate the memory  "<<i+1<<endl;
		cout<<*(pointer+i)<<endl;

	}

	return 0 ;
}
/*
 * OUTPUT
Enter the number for allocate the memory 1
3
Enter the number for allocate the memory 2
1
Enter the number for allocate the memory 3
3
Enter the number for allocate the memory 4
4
number for allocate the memory  1
3
number for allocate the memory  2
1
number for allocate the memory  3
3
number for allocate the memory  4
4
*/
