#include <iostream>
#include <cstdlib>
using namespace std;

void shellsort(int array[], int k)
{
	for (int ret = k / 2; ret > 0; ret /= 2)
	{
		for (int i = ret; i < k; i+= 1)
		{

			int temp = array[i];
	
			int l;
			for (l = i; l >= ret && array[l - ret] > temp; l -= ret)
				array[l] = array[l - ret];
				
			array[l] = temp;
		}
	}
}

void displayarray(int array[], int k)
{
	for(int i = 0; i < k; i++)
		cout << array[i] << "\t";
}

int main()
{
	
	int j = 10;
	int array[j];		
	int shuffle; //use this for shuffle the random number hahaha
	
	do 
	{
	
	system("cls"); 
	for (int i = 0; i < k; i++)
	{
	 	array[i] = rand(); 
	}
	
		shellsort(array, k);
	
		cout << "\t\t\t\t     Sorting array is \n " <<endl;
		displayarray(array, k); 
		cout << "\n\nChoice 1 - 2 " <<endl;
		cout <<"Press '1' to reset number " <<endl;
		cout << "Press '2' to exit program " <<endl;
		cin >> shuffle;
	}while (shuffle != 2);	
}
