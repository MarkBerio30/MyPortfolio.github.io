// Design a calculator program that uses Function with no argument but return value.
#include <iostream>
using namespace std;

char calculator();

int main()
{
	
    float n1 , n2, result;
    char opt;
	// No argument is passed to calculator()
	opt = calculator();
	
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
		result = opt + n2;	
		cout << n1 << " + " << n2 << " = " << result;
    }
    else if (opt == '/')
	{
		result = n1 + n2;	
		cout << n1 << " + " << n2 << " = " << result;
    }
    else
    {
        cout<< "Error! Operator is not correct"; // wrong operator input   	
	} 
    return 0;
}
char calculator()
{
	char opt;
	cout << "Enter Operator (+, -, *, /) ";
    cin >> opt;
    return opt;
}



