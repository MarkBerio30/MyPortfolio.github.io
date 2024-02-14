#include<iostream>
#include <cstdlib> 
using namespace std;

void selectionSort(int array[], int m)
{
   int i;
   int j;
   int min;
   int temp;
   
   for (i = 0; i < m - 1; i++) 
   {
    min = i;
      for (j = i + 1; j < m; j++)
      	if (array[j] < array[min])
      		min = j;
     	 	temp = array[i];
      		array[i] = array[min];
      		array[min] = temp;
   }
}

int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l)
	{
		int mid = l + (r - l) / 2; 
		
		
		if (arr[mid] == x)
			return mid;
		
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);
	
		return binarySearch(arr, mid + 1, r, x);
	}
	return - 1;
}

int main()
{
	int array[21]; 
	int x; 
	

	
	for(int i = 0; i < 21 ; i++)
	{
		array[i] = rand();  
	}

	selectionSort(array, 21);
	cout<<"\t\t\tSorted Array: \n";
		for(int i = 0; i < 21; i++)
		{
			cout<<"\t\t\t\t\t\t     " << array[i] <<endl; 
		}
		
		cout << "\n";
		cout<<"\t\t\tEnter value to search: ";
		cin>> x; 
		
	int result = binarySearch(array, 0, 21 - 1, x);
	
		(result == - 1) ? cout << "\t\t\tElement not found"
				: cout << "\t\t\tElement found at index: " << result + 0;
	
		return 0;
}

