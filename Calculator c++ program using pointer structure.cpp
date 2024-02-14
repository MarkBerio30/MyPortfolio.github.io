// Basic calculator c++ program using pointer structure.
#include <iostream> 
using namespace std; 

struct calculator
{
	float n1; 
	float n2;
	char opt; 

};

int main() 
{ 
	
	calculator	*pCal = new calculator; // Request memory for the variable
	
	cout << "Enter an operator (+, -, *, /): "; 
		cin >> pCal->opt; 
	cout << "Enter First number: "; 
		cin >> pCal->n1; 
	cout << "Enter Second number: ";
		cin >> pCal->n2;
	switch (pCal->opt) 
	{ 
		case '+':
			cout << pCal->n1 << " + " << pCal->n2 << " = " << pCal->n1 + pCal->n2;
		break;
		case '-': 
			cout << pCal->n1 << " - " << pCal->n2 << " = " << pCal->n1 - pCal->n2; 	
		break;
		case '*': 
			cout <<pCal->n1 << " * " << pCal->n2 << " = " << pCal->n1 * pCal->n2; 
		break;
		case '/': 
			cout << pCal->n1 << " / " << pCal->n2 << " = " << pCal->n1 / pCal->n2; 
		break; 
		default: 
		    // operator is doesn't match any case constant (+, -, *, /) 
			cout << "Error! The operator is not correct"; 
		break; 	
	} 
	delete pCal; // free up the memory
	return 0;
}


