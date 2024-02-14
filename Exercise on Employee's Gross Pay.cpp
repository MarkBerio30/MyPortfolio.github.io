// Exercise on Array
#include <iostream>
using namespace std;
int main()
{
	const int SIZE = 6;   // constant for the size of the array
	float hours[SIZE];    // declare Real hours[SIZE]
    float payRate;        // variable to hold the hourly pay rate
    float grossPay;       // variable to hold a gross pay amount
    int index;            // variable to use as a loop counter
    
    // Get each employee's hours worked
    for (index = 0; index <= SIZE - 1; index++)
	{
		cout << "Enter the hours worked by ";
		cout << "employee " << index + 1 << ". ";
        cin >> hours[index];
	}
	
	// Get the hourly pay rate
	cout << "\nEnter the hourly pay rate : "; 
    cin >> payRate;
    
    // display each employee's gross pay
    cout << "\nHere is each employee's gross pay\n";
    for (index = 0; index <= SIZE - 1; index++)
    {
    	grossPay = hours[index] * payRate;
    	cout << "Employee " << index + 1 << ": " << grossPay << endl; 
	}
	return 0;
}



