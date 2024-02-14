#include<iostream>
#include <cstdlib> 
using namespace std;

void selectionSort(int arr[], int n) 
{
   int i; 
   int j; 
   int min;
   int temp;
   for (i = 0; i < n - 1; i++) 
   {
      min = i;
      for (j = i + 1; j < n; j++)
      	if (arr[j] < arr[min])
      		min = j;
      		temp = arr[i];
      		arr[i] = arr[min];
     		arr[min] = temp;
   }
}

int main()
{
	int array[21]; 
	int x;
	int status; 
	

	
		for(int i = 0; i < 21; i++)
		{
			array[i] = rand();  
		}
	
	selectionSort(array, 21);
	cout<<"\t\t\tSorted Array: \n";
	for(int i = 0; i < 21; i++)
	{
		cout<<"\t\t\t\t\t\t     "<<array[i]<<endl; 
	}
	
	cout << "\n";
	cout<<"\t\t\tEnter value to search: ";
	cin>>x; 
	
	for(int j = 0; j < 21; j++)
	{
		
		if(array[j] == x)
		{
			cout<<"\t\t\tValue found at index: "<< j + 0 <<endl;
			status = 1; 
		}	
	}
		
		if(status != 1)
		{
			cout<<"\t\t\tValue not found";
		}
}

