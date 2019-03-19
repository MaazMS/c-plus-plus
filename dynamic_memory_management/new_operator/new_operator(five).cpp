#include<iostream>

using namespace std;

int main()
{


	int *pointer;


	pointer=new int (4);

	for (int i=0;i<4;i++)
	{

		cout<<"Enter the number for allocate the memory"<<i+1<<endl;
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
Enter the number for allocate the memory1
1
Enter the number for allocate the memory2
2
Enter the number for allocate the memory3
3
Enter the number for allocate the memory4
4
number for allocate the memory  1
1
number for allocate the memory  2
2
number for allocate the memory  3
3
number for allocate the memory  4
4
*/
