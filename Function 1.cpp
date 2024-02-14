// Design a calculator program that uses Functions with no argument and no return value.
#include <iostream>
using namespace std;

//declaring function without any argument
void calculator();

int main()
{
	// No argument is passed to calculator()
	calculator(); 
	return 0;
}
// Return type of function is void because value is not returned.
void calculator()
{
	
	float n1, n2, result;
	char opt;
	
	// Input the User
    cout << "Enter Operator (+, -, *, /) ";
    cin >> opt;
    cout << "Enter the First Number: ";
    cin >> n1;
    cout << "Enter the Second Number: ";
    cin >> n2;
    
    // if for the chosen operator
    if(opt == '+')
    {
        result = n1 + n2;	
		cout << n1 << " + " << n2 << " = " << result;
    }
    else if(opt == '-')
	{
        result = n1 - n2;	
		cout << n1 << " - " << n2 << " = " << result;
    }
    else if (opt == '*')
	{
        result = n1 * n2;	
		cout << n1 << " * " << n2 << " = " << result;
    }
    else if (opt == '/')
	{
        result = n1 / n2;
		cout << n1 << " / " << n2 << " = " << result;
    }
    else
	{
    	cout<< "Error! Operator is not correct"; // if wrong operator input 
	}
          	
}


