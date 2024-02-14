#include <iostream>
#include <cstdlib> 
using namespace std;

void heaps(int array[], int m, int k)
{
	int large = k;
	int l = 2 * k + 1; 
	int r = 2 * k + 2; 
	
	
	if (l < m && array[l] > array[large])
		large = l;
	
	
	if (r < m && array[r] > array[large])
		large = r;
	
	
	if (large != k)
	{
		swap(array[k], array[large]);
		
		heaps(array, m, large);
	}
}


void heapsort(int array[], int m)
{
	for (int i = m / 2 - 1; i>= 0; i--)
		heaps(array, m, i);
	
	for (int i = m - 1; i >= 0; i--)
	{
	
		swap (array[0], array[i]);
		
		
		heaps(array, i , 0);
	}
}


void displayarray(int array[], int m)
{
	for (int i = 0; i < m; i++)
		cout << array[i] << "\t";
		
}

int main()
{
	int m = 10; 
	int array[m]; 
	  
	 for (int i = 0; i < m; i++)
	{
		array[i] = rand(); 
	}
		heapsort(array, m); 
	
		cout << "\t\t\t\t    Sorting array is\n " <<endl;
		displayarray(array, m); 
}
