#include <iostream>
#include <cstdlib> 
using namespace std;

void swaps (int *a, int *b)
{
	int k = *a;
	*a = *b;
	*b = k;
}

int partition(int array[], int low, int high)
{
	int pivot = array[high]; 
	int i = (low - 1); 
	
	for(int m = low; m <= high - 1; m++)
	{
		
		if(array[m] <= pivot)
		{
			i++; 
			swaps(&array[i], &array[m]);
		}
	}
		swaps(&array[i + 1], &array[high]);
	return (i + 1);
}

void quicksort(int array[], int low, int high)
{
	if (low < high)
	{
	
		int r = partition(array, low, high);
		
		quicksort(array, low, r - 1);
	
		quicksort(array, r + 1, high);
	}
}


void displayarray(int array[], int j)
{
	for(int i = 0; i < j; i++)
		cout << array[i] << " \t" ;
}

int main()
{
	int m = 11; 
	int array[m]; 
	
 
	 for (int i = 0; i < m; i++)
	 {
	 	array[i] = rand(); 
	 }
	
		quicksort(array, 0, m -1);
		cout << "\t\t\t\t   Sorting array is\n " <<endl;
		displayarray(array, m);
}
