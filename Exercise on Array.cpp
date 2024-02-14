// Exercise on Array
#include <iostream> 
using namespace std;
int main()
{
	int arr;
	int num[arr];
	
	cout << "Output:\n " << endl;
	
	cout << "Enter the number of element of the array: "; 
	cin >> arr;
		
	cout << "\nEnter the values of the 5 elements of an array: "; 
	
	// store input from user to array
	for (int i = 0; i < arr; i++)
	{
		cin >> num[i]; 
	}
	cout << "\nThe array index and its values are follows: " <<endl; 
	
	// Display array index and values
 	for (int n = 0; n < arr; n++)
    {
		cout << "\nArray["<< n <<"] = " << num[n] <<"\n"; 
	}
	return 0;	
}


