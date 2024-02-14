// Design a calculator program that uses Function overloading
#include <iostream>
using namespace std;

// function with float type parameter
float add(float x , float y)
{
    return (x + y);
}
// function with int type parameter
int add (int x , int y) 
{
    return (x + y);
}

// function with float type parameter
float subtract(float x , float y)
{
    return (x - y);
}
// function with int type parameter
int subtract (int x , int y) 
{
    return (x - y);
}

// function with float type parameter
float multiply(float x , float y)
{
    return (x * y);
}
// function with int type parameter
int multiply (int x , int y) 
{
    return (x * y);
}

// function with float type parameter
float divide(float x , float y) 
{
    return (x / y);
}
// function with int parameter
int divide (int x , int y) 
{
    return (x / y);
}

int main()
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
        result = add (n1,n2);	
		cout << n1 << " + " << n2 << " = " << result;
    }
    else if(opt == '-')
	{
        result = subtract (n1,n2);	
		cout << n1 << " - " << n2 << " = " << result;
    }
    else if (opt == '*')
	{
        result = multiply (n1,n2);	
		cout << n1 << " * " << n2 << " = " << result;
    }
    else if (opt == '/')
	{
        result = divide (n1,n2);	
		cout << n1 << " / " << n2 << " = " << result;
    }
    else
    {
    	cout<< "Error! Operator is not correct"; // if Wrong Operator input
	}     
    return 0;
}




