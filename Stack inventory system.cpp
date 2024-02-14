//Design three varieties of C++ program of a simple inventory system using stack, Queue, and Linked list respectively.
//Make a documentation of your program containing screenshots of your output and copy of your source code.
//Discuss your source code in your documentation.

//STACK
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int stack = 0;

struct invent
{
	int pID[20]; //Product ID
	string productName[50]; // Product Name
	int quantity[20]; // Quantity
	float price[20]; // Price
};

//function to show item
void tableshow(int pID[20], string productName[50], int quantity[20] , float price[20], int stack)
{
	cout << "Note that Inventory System only 10 max Items " <<endl; // Reminder that only 10 max item input
	cout <<"============================================= INVENTORY SYSTEM IN STACK ================================================"<<endl;
	cout << "\n ----------------------------------------------------------------------------------------------------------------------" << endl;
	cout << setw(21) <<"|Product ID|" << setw(33)<< "|Product Name|" << setw(30)<< "|Quantity|" << setw(28) << "|Price|";
	cout << "\n ----------------------------------------------------------------------------------------------------------------------" << endl;
	if ( stack > 0)
	{
		for (int i = 0; i < stack; i++)
		{
			cout<< setw(15) <<pID[i] <<setw(34) <<productName[i] <<setw(31)<<quantity[i] << setw(29)<<price[i]<<endl; //Output if input user add edit search delete
		}
	}
	
}

//function to add item 
void add(int pID[20], string productName[50], int quantity[20] , float price[20], int stack)
{	
	system("cls"); //clear display and to show next line in the codes
		cout << "\t\t\tNote that Only Product ID, Quantity, Price, input the numbers only" <<endl; // Reminder that only input user is number
		cout << "\t\t\tNote that Only Product Name input the letters only" <<endl; // Reminder that only input user is letters
		cout << "\t\t\t\t\t      Thank You" <<endl;
		cout << ""<<endl;	
		cout << "Enter Product ID: ";
			cin >> pID[stack]; // the Product ID inputted by the user stored
		cout << "Enter Product Name: ";
			cin >> productName[stack]; // the Product Name inputted by the user stored
		cout << "Enter Quantity: "; // the Quantity inputted by the user stored
			cin >> quantity[stack];
		cout << "Enter Price: ";
			cin >> price[stack]; // the Price inputted by the user stored
		cout << "RECORD ADDED"<<endl <<endl; //display function if the user finish to add product
			stack++; //initiated the stack variable and it will be increase each call
}

//function to Edit item 
void Edit(int pID[20], string productName[50], int quantity[20] , float price[20], int stack)
{
	int edit;
		cout << ""<<endl;
		cout << "Only Product ID input"<<endl;
		cout << "Edit Product info: ";
			cin >> edit;
	system("cls");
	for(int i = 0; i < stack ; i++)
	{
		if(pID[i] == edit)
		{
			cout << "ITEM FOUND" <<endl; //display varaibale edit if match in element product id
			cout <<"============================================= INVENTORY SYSTEM IN STACK ================================================"<<endl;
			cout << "\n ----------------------------------------------------------------------------------------------------------------------" << endl;
  			cout << setw(21) <<"|Product ID|" << setw(33)<< "|Product Name|" << setw(30)<<"|Quantity|" << setw(28) << "|Price|";
  			cout << "\n ----------------------------------------------------------------------------------------------------------------------" << endl;
  			cout<< setw(15) <<pID[i] <<setw(35) <<productName[i] <<setw(30)<<quantity[i] << setw(29)<<price[i]<<endl; // display product found
  			cout << "\n" <<endl;
					
			
			cout << "\n\nEnter Product ID: ";
			cin >> pID[i];
			cout << "Enter Product Name: ";
			cin >> productName[i];
			cout << "Enter Quantity: ";
			cin >> quantity[i];
			cout << "Enter Price: ";
			cin >> price[i];
			cout << "RECORD UPDATE" << endl;	
		}
	}			
}

//function to delete item
void Search(int pID[20], string productName[50], int quantity[20] , float price[20], int search)
{
	int Search;
		cout << ""<<endl;
		cout << "Only Product ID input" <<endl; // Reminder that only Product ID inputted to the user
		cout << "Search Product: ";
			cin >> Search;
		system("cls"); ////clear display and to show next line in the codes
		for(int i = 0; i < stack ; i++)
		{	
			if (pID[i]==Search)
			{
				
				cout << "RECORD FOUND\n" <<endl; // This line will be display if the variable edit match in element product id
				// display the item equivalent to product id to become search variable
  				cout <<"============================================= INVENTORY SYSTEM IN STACK ================================================"<<endl;
				cout << "\n ----------------------------------------------------------------------------------------------------------------------" << endl;
				cout << setw(21) <<"|Product ID|" << setw(33)<< "|Product Name|" << setw(30)<< "|Quantity|" << setw(28) << "|Price|";
				cout << "\n ----------------------------------------------------------------------------------------------------------------------" << endl;
  				cout<< setw(15) <<pID[i] <<setw(35) <<productName[i] <<setw(30)<<quantity[i] << setw(29)<<price[i]<<endl; 
  				cout <<"\n\n\n\n" <<endl;	
  				break;
			}
						
		}		
}	

//function to delete item 
void Delete(int pID[20], string productName[20], int quantity[20] , float price[20], int stack)
{
	int deleted;
		cout << ""<<endl;
		cout << "Only Product ID input"<<endl; // Reminder that only Product ID inputted to the user
		cout << "Delete Product: ";
			cin>>deleted;
		system("cls"); ////clear display and to show next line in the codes
	
	//loop	
	for(int i = 0; i < stack; i++)
	{
		if(pID[i]==deleted)
		{
			for(int j=i; j<(stack - 1); j++)
			{
				pID[j] = pID[j+1];
				productName[j] = productName[j+1];
                quantity[j] = quantity[j+1];
                price[j] = price[j+1];
				stack--;
				break;
			}			
		}	
	}
				cout << "RECORD DELETED!\n"<<endl;	//display function if the user finish to delete product		
}




void top(int pID[20])
{
	if (stack > 0)
	{	
		for (int i = 0; i < stack; i++)
		{
			cout << "The current top element in Inventory Sytem Stack is Product ID " << pID[i];
		}
		
	}	
}

//function returns the size of the container
int size()
{
	return stack;
}

//function check whether the associated container is empty or not and return true and false accordingly
bool isempty()
{
	if (stack == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}			
int main()
{
	//create the pointer to the structure
	//ptr point to variables inside the structure
	invent *tor, s;
	tor = &s;
	
	 char exit;
	 
	 // do while loop used to iterate part of the program several times
	 //if select 5 it will be end the program
	do
	{	
		tableshow(tor->pID,tor->productName,tor->quantity,tor->price,stack); // call function in tableshow
		cout <<"Current Size of stack is " << size () <<endl <<endl;
		
		cout << "Choose 1 to 5 " <<endl; // Reminder that user only select 1 to 5
		cout << "1 - Add Product" << endl; //add product
		cout << "2 - Edit Product info" << endl; //edit product to new product
		cout << "3 - Search Product" << endl; // search product
		cout << "4 - Delete Latest Product" << endl; // delete the latest input stored product
		cout << "5 - Exit" << endl; // exit program
		cout << "Selection: "; // Inputted user they wan
		
	int choice;
	
	cin >> choice;	
	
	//switch case allows a variable to be tested for equality against a list of values
	// Each values is called case and the variable being switched on is checked for each case
	switch (choice) // switch case initialze above function
	{
		case 1:
			// if top position is last of position the stack it will be stack is full
			if (stack == 10)
			{
				cout << "Stack is Full it is underflow condition!" <<endl;
				cout << "The Inventory reach maximum item limit" <<endl;
			}
			else
			{
				add(tor->pID,tor->productName,tor->quantity,tor->price,stack);
				stack++;	
			}
			break;
		case 2:
			if (stack == 0)
			{
				cout << "Stack is Full it is underflow condition!" <<endl;
				cout << "The Inventory reach maximum item limit" <<endl;
				
			}
			else
			{
				Edit(tor->pID,tor->productName,tor->quantity,tor->price,stack);
			}
			break;
		case 3:
			if (stack == 0)
			{
				cout << "Stack is Full it is underflow condition!" <<endl;
				cout << "The Inventory reach maximum item limit" <<endl;	
			}
			else
			{
				Search(tor->pID,tor->productName,tor->quantity,tor->price,stack);	
			}	
			break;
		case 4:
			if (isempty ())
			{
				cout << "Stack is Full it is underflow condition!" <<endl;
			}
			else
			{
				Delete(tor->pID,tor->productName,tor->quantity,tor->price,stack);
				stack--;
			}
			break;	
		case 5:
			cout << "Thank You for using!\n";
			return exit = '5';
		default:
			cout << "\nInvalid Choices\n\n";
				
	}	
	} while(exit != '5');
	
		return 0;
 			
}
