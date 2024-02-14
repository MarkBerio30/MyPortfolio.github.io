
#include <iostream>
#include <cmath> // used this for division by 0 to become infinity
using namespace std;

//base class
class oper //The class of oper
{
	public: //Access Specifier
		virtual float values (float n1, float n2) = 0;
		virtual ~oper (){}
};

//derived class
class add : public oper
{
	public: //Access Specifier
		float values(float n1, float n2)
		{
			return n1 + n2;
		}
};

//derived class
class subtract : public oper
{
	public: //Access Specifier
		float values(float n1, float n2)
		{
			return n1 - n2;
		}
};

//derived class
class multiply : public oper
{
	public: //Access Specifier
		float values(float n1, float n2)
		{
			return n1 * n2;
		}
};

//derived class
class divide : public oper
{
	public: //Access Specifier
		float values (float n1, float n2)
		{
			if (n2 == 0)
			{
				cout << "Division by Zero " <<endl;
				return INFINITY;
			}
			else
			{
				return n1 / n2;
			}
		}	
};


//derived class
class calculator //Access Specifier
{
	private:
		//private attribute
		float num1;
		float num2;
		int choice;
		int exit;
	
	public: //Access Specifier
		int input() // method/function define inside the class
		{
			oper *opt;
			
			cout << "Select any operation from the C++ Calculator";
			cout << "\nSelect 1 to 5 Only"; //Remainder
			
			//print four operations
			cout << "\n1 = ADDITION ";
			cout << "\n2 = SUBTRACTION ";
			cout << "\n3 = MULTIPLICATION ";
			cout << "\n4 = DIVISION ";
			cout << "\n5 = EXIT PROGRAM ";
			cout << "\n";
			
		//do while loop statement
		do
		{
			//for loop statement
			for (bool repeat = true; repeat;)
			{
				cout << "\nEnter Choice: "; //print the enter choice operation
				cin >> choice;
				
			//switch case statement
			switch (choice)
			{
				case 1:
					opt = new add(); //dynamically allocate new object
					repeat = false;
					break;
				case 2:
					opt = new subtract(); //dynamically allocate new object
					repeat = false;
					break;
				case 3:
					opt = new multiply(); //dynamically allocate new object
					repeat = false;
					break;
				case 4:
					opt = new divide(); //dynamically allocate new object
					repeat = false;
					break;
				case 5:
					cout << "Thank you for using!\n";
					return exit;
					break;
				default:
					cout << "Error! The operator is not correct\n";
					break;
			}
					cout << "Enter First Number: "; //print first number
					cin >> num1;
					cout << "Enter Second Number: "; //print second number
					cin >> num2;
					
					float result = opt->values(num1,num2);
					cout << "Result = " << result << endl;
					
					delete opt; //deallocate object
			}
		}while (exit != '5');	
		}
};

int main ()
{
	calculator obj; //create an object of calculator
	obj.input(); //call the method input
	return 0;
}
