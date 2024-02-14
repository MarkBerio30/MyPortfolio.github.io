//Design three varieties of C++ program of a simple inventory system using stack, Queue, and Linked list respectively.
//Make a documentation of your program containing screenshots of your output and copy of your source code.
//Discuss your source code in your documentation.

//QUEUE
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int front  = 0;
int rear = 0;

struct invent
{
	int pID[20];
	string productName[50];
	int quantity[20];
	float price[20];
};

void tableshow(int pID[20], string productName[50], int quantity[20] , float price[20], int rear, int front)
{
	cout <<"============================================= INVENTORY SYSTEM IN QUEUE ================================================"<<endl;
	cout << "\n ----------------------------------------------------------------------------------------------------------------------" << endl;
	cout << setw(21) <<"|Product ID|" << setw(33)<< "|Product Name|" << setw(30)<< "|Quantity|" << setw(28) << "|Price|";
	cout << "\n ----------------------------------------------------------------------------------------------------------------------" << endl;
	if ( rear > 0)
	{
		for (int i = front; i < rear; i++)
		{
			cout<< setw(15) <<pID[i] <<setw(34) <<productName[i] <<setw(31)<<quantity[i] << setw(29)<<price[i]<<endl; //Output if input user add edit search delete
		}
	}
	
}

//function to add item 
void add(int pID[20], string productName[50], int quantity[20] , float price[20], int rear)
{	
	if (front == 0);
	front - 1;
	system("cls");
		cout << "\t\t\tNote that Only Product ID, Quantity, Price, input the numbers only" <<endl;  // Reminder that only input user is number
		cout << "\t\t\tNote that Only Product Name input the letters only" <<endl; // Reminder that only input user is letters
		cout << "\t\t\t\t\t      Thank You" <<endl;
		cout << ""<<endl;	
		cout << "Enter Product ID: ";
			cin >> pID[rear]; // the Product ID inputted by the user stored
		cout << "Enter Product Name: ";
			cin >> productName[rear]; // the Product Name inputted by the user stored
		cout << "Enter Quantity: ";
			cin >> quantity[rear]; // the Quantity inputted by the user stored
		cout << "Enter Price: ";
			cin >> price[rear]; // the Price inputted by the user stored
		cout << "RECORD ADDED"<<endl;  //display function if the user finish to add product
			rear++; //initiated the stack variable and it will be increase each call
}

//function to Edit item
void Edit(int pID[20], string productName[50], int quantity[20] , float price[20], int rear)
{
	int edit;
		cout << ""<<endl;
		cout << "Only Product ID input"<<endl;
		cout << "Edit Product info: ";
			cin >> edit;
	system("cls");
	for(int i = 0; i < rear ; i++)
	{
		if(pID[i] == edit)
		{
			cout << "ITEM FOUND" <<endl; //display varaibale edit if match in element product id
			cout <<"============================================= INVENTORY SYSTEM ========================================================"<<endl;
			cout << "\n ----------------------------------------------------------------------------------------------------------------------" << endl;
  			cout << setw(21) <<"|Product ID|" << setw(33)<< "|Product Name|" << setw(30)<<"|Quantity|" << setw(28) << "|Price|";
  			cout << "\n ----------------------------------------------------------------------------------------------------------------------" << endl;
  			cout<< setw(15) <<pID[i] <<setw(35) <<productName[i] <<setw(30)<<quantity[i] << setw(29)<<price[i]<<endl;  // display product found
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

//function to search item
void Search(int pID[20], string productName[50], int quantity[20] , float price[20], int rear)
{
	int Search;
		cout << ""<<endl;
		cout << "Only Product ID input" <<endl; // Reminder that only Product ID inputted to the user
		cout << "Search Product: ";
			cin >> Search;
		system("cls"); //clear display and to show next line in the codes
		for(int i = 0; i < rear ; i++)
		{	
			if (pID[i]==Search)
			{
				
				cout << "RECORD FOUND\n" <<endl; // This line will be display if the variable edit match in element product id
				// display the item equivalent to product id to become search variable
  				cout <<"============================================= INVENTORY SYSTEM ========================================================="<<endl;
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
void Delete(int pID[20], string productName[20], int quantity[20] , float price[20], int rear, int front)
{
	system("cls");
	if (front = 0)	
	for(int i = 0; i < rear - 1; i++)
	{
		if(front == rear)
		{	
			cout << "Queue is Empty it is underflow condtion!";
			return;	
		}
		else
		{
				pID[i] = pID[i+1];
				productName[i] = productName[i+1];
                quantity[i] = quantity[i+1];
                price[i] = price[i+1];
			
		}		
	}	
}


int main()
{
	//create the pointer to the structure
	//ptr point to variables inside the structure	
	invent *tor, s;
	tor = &s;

	 int exit;
	do 
	{	
		tableshow(tor->pID,tor->productName,tor->quantity,tor->price,rear,front); // call function in tableshow
		
		cout << "\nChoose 1 to 5 " <<endl; // Reminder that user only select 1 to 5
		cout << "1 - Add Product" << endl; //add product
		cout << "2 - Edit Product info" << endl; //edit product to new product
		cout << "3 - Search Product" << endl; // search product
		cout << "4 - Delete Latest Product" << endl; // delete the latest input stored product
		cout << "5 - Exit" << endl; //exit program
		cout << "Selection: "; // Inputted user they want
		
	int choice;
	
	cin >> choice;	
	
	//switch case allows a variable to be tested for equality against a list of values
	// Each values is called case and the variable being switched on is checked for each case
	switch (choice) // switch case initialze above function
	{
		case 1:
				add(tor->pID,tor->productName,tor->quantity,tor->price,rear);
				rear++;	
				break;
		case 2:
			if (rear == 0)
			{
				cout << "Stack is Full it is underflow condition!" <<endl;
				cout << "The Inventory reach maximum item limit" <<endl;
				
			}
			else
			{
				Edit(tor->pID,tor->productName,tor->quantity,tor->price,rear);
			}
			break;
		case 3:
			if (rear == 0)
			{
				cout << "Stack is Full it is underflow condition!" <<endl;
				cout << "The Inventory reach maximum item limit" <<endl;	
			}
			else
			{
				Search(tor->pID,tor->productName,tor->quantity,tor->price,rear);	
			}	
			break;
		case 4:
			if (rear == 0 || rear == front) 
			{
				cout << "Stack is Full it is underflow condition!" <<endl;
			}
			else
			{
				Delete(tor->pID,tor->productName,tor->quantity,tor->price,rear,front);
				front++;
				cout << "RECORD DELETED\n";
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
