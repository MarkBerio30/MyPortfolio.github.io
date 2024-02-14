//**Design a Basic Inventory system having the following information:**//
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct invent
{
	int pID[20];
	string productName[50];
	int quantity[20];
	float price[20];
};

void tableshow(int pID[20], string productName[50], int quantity[20] , float price[20], int counter)
{
	cout <<"============================================= INVENTORY SYSTEM ========================================================="<<endl;
	cout << "\n ----------------------------------------------------------------------------------------------------------------------" << endl;
	cout << setw(21) <<"|Product ID|" << setw(33)<< "|Product Name|" << setw(30)<< "|Quantity|" << setw(28) << "|Price|";
	cout << "\n ----------------------------------------------------------------------------------------------------------------------" << endl;
	if ( counter > 0)
	{
		for (int i = 0; i < counter; i++)
		{
			cout<< setw(15) <<pID[i] <<setw(34) <<productName[i] <<setw(31)<<quantity[i] << setw(29)<<price[i]<<endl; //Output if input user add edit search delete
		}
	}
	
}

// ADD CODE//////
void add(int pID[20], string productName[50], int quantity[20] , float price[20], int counter)
{	
	system("cls");
		cout << ""<<endl;	
		cout << "Enter Product ID: ";
			cin >> pID[counter];
		cout << "Enter Product Name: ";
			cin >> productName[counter];
		cout << "Enter Quantity: ";
			cin >> quantity[counter];
		cout << "Enter Price: ";
			cin >> price[counter];
		cout << "RECORD ADDED"<<endl;
			counter++;
}

// DELETE CODE//////
void Delete(int pID[20], string productName[20], int quantity[20] , float price[20], int counter)
{
		int deleted;
		cout << ""<<endl;
		cout << "Only Product ID input"<<endl;
		cout << "Delete Product: ";
			cin>>deleted;
		system("cls");
	for(int i = 0; i < counter; i++)
	{
		if(pID[i]==deleted)
		{
			for(int j=i; j<(counter - 1); j++)
			{
				pID[j] = pID[j+1];
				productName[j] = productName[j+1];
                quantity[j] = quantity[j+1];
                price[j] = price[j+1];
				counter--;
				break;
			}			
		}	
	}
				cout << "RECORD DELETED!\n"<<endl;			
}

// SEARCH CODE//////
void Search(int pID[20], string productName[50], int quantity[20] , float price[20], int counter)
{
	int Search;
		cout << ""<<endl;
		cout << "Only Product ID input" <<endl;
		cout << "Search Product: ";
			cin >> Search;
		system("cls");
		for(int i = 0; i < counter ; i++)
		{	
			if (pID[i]==Search)
			{
				
				cout << "RECORD FOUND\n" <<endl;
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

// EDIT CODE//////
void Edit(int pID[20], string productName[50], int quantity[20] , float price[20], int counter)
{
	int edit;
		cout << ""<<endl;
		cout << "Only Product ID input"<<endl;
		cout << "Edit Product info: ";
			cin >> edit;
	system("cls");
	for(int i = 0; i < counter ; i++)
	{
		if(pID[i] == edit)
		{
			cout <<"============================================= INVENTORY SYSTEM ========================================================"<<endl;
			cout << "\n ----------------------------------------------------------------------------------------------------------------------" << endl;
  			cout << setw(21) <<"|Product ID|" << setw(33)<< "|Product Name|" << setw(30)<<"|Quantity|" << setw(28) << "|Price|";
  			cout << "\n ----------------------------------------------------------------------------------------------------------------------" << endl;
  			cout<< setw(15) <<pID[i] <<setw(35) <<productName[i] <<setw(30)<<quantity[i] << setw(29)<<price[i]<<endl; 
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
			
int main()
{
		
	invent *tor, s;
	tor = &s;
	int counter = 0;
	int choice = 0;
	
	while (choice != 5)
	{	
		tableshow(tor->pID,tor->productName,tor->quantity,tor->price,counter); // call function in tableshow
		
		cout << "\n1 - Add Product" << endl;
		cout << "2 - Edit Product info" << endl;
		cout << "3 - Search Product" << endl;
		cout << "4 - Delete Product" << endl;
		cout << "5 - Exit" << endl;
		cout << "Enter: ";
		cin >> choice;
	switch (choice)
	{
		case 1:
			add(tor->pID,tor->productName,tor->quantity,tor->price,counter);
			counter++;
			break;
		case 2:
			Edit(tor->pID,tor->productName,tor->quantity,tor->price,counter);
			break;
		case 3:
			Search(tor->pID,tor->productName,tor->quantity,tor->price,counter);		
			break;
		case 4:
		  	Delete(tor->pID,tor->productName,tor->quantity,tor->price,counter);
			counter--;
			break;			
	}	
	}
 			cout << "Thank You for using!\n";
			return 0;
}
