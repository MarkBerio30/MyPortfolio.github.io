// Design a calculator program that uses Function with argument but no return value. 
#include <iostream>
using namespace std;
void calculator (float x , char y , float z);
int main ()
{
	float n1, n2;
	char opt;
	
	// Input the User
    cout << "Enter Operator (+, -, *, /) ";
    cin >> opt;
    cout << "Enter the First Number: ";
    cin >> n1;
    cout << "Enter the Second Number: ";
    cin >> n2;
    
    // Argument n1 , n2, opt is passed to the function calculator()
    calculator (n1 , opt, n2);
    return 0;
}
// There is no return value to calling function. Hence, return type of function is void. */
void calculator (float x , char y , float z)
{
	float result; // Result the value you input 
	
	// if for the chosen operator
	if (y == '+')
	{
		result = x + z;
		cout << x << " + " << z << " = " << result;
	}	    
	else if (y == '-')
	{
		result = x - z;
		cout << x << " - " << z << " = " << result;
	}   
	else if (y == '*')
	{
	    result = x * z;
		cout << x << " * " << z << " = " << result;	
	}    
	else if (y == '/')
	{
	    result = x / z;
		cout << x << " / " << z << " = " << result;	
	}
	else
	{
		cout << "Error! Operator is not correct"; // if Wrong Operator input
	}	        	    
}


