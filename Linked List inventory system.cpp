//Design three varieties of C++ program of a simple inventory system using stack, Queue, and Linked list respectively.
//Make a documentation of your program containing screenshots of your output and copy of your source code.
//Discuss your source code in your documentation.

//Linked List 
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
using namespace std;

struct node
{
	int pID;
	string productName;
	int quantity;
	float price;
	
	struct node *next;
	struct node *prev;
}*srt; //start

class list //double list
{
	public:
		void add(int id, string Name, int quan, float pre);
		void edit(int pID);
		void search_element(int id);
		void delete_element(int id);
		void cnt(); //count
		void display();
	
	list()
	{
		srt = NULL;
	}
};

void list::add(int id, string Name, int quan, float pre)
{
	struct node *m, *temp;
	temp = new (struct node);
	temp -> pID = id;
	temp -> productName = Name;
	temp -> quantity = quan;
	temp -> price = pre;
	temp -> next = NULL;
	
	if(srt == NULL)
	{
		temp -> prev = NULL;
		srt = temp;
	}
	else
	{
		m = srt;
		while (m -> next != NULL)
		m = m -> next;
		m -> next = temp;
		temp -> prev = m;
	}
}
void list::edit(int id)
{
	struct node *e, *temp;
	temp = new (struct node);
	temp -> pID;
	temp -> productName;
	temp -> quantity;
	temp -> price;
	temp -> next = NULL;
	
	e = srt;
	if (srt == NULL)
	{
		cout << "List Empty" <<endl;
		return;
	}
	else
	{
		while (e != NULL)
		{
			if(e->pID == id)
			{
				cout <<"============================================= INVENTORY SYSTEM ========================================================"<<endl;
				cout << "\n ----------------------------------------------------------------------------------------------------------------------" << endl;
  				cout << setw(21) <<"|Product ID|" << setw(33)<< "|Product Name|" << setw(30)<<"|Quantity|" << setw(28) << "|Price|";
  				cout << "\n ----------------------------------------------------------------------------------------------------------------------" << endl;
  				cout<< setw(15) <<e->pID<<setw(35) <<e->productName <<setw(30)<<e->quantity << setw(29)<<e->price<<endl; 
  				cout << "\n" <<endl;
					
				cout << "\n\nEnter New Item" <<endl;
				cout << "Enter Product ID: ";
				cin >> e->pID;
				cout << "Enter Product Name: ";
				cin >> e->productName;
				cout << "Enter Quantity: ";
				cin >> e->quantity;
				cout << "Enter Price: ";
				cin >> e->price;
				cout << "RECORD UPDATE" << endl;
				break;
			}
			else
			{
				e = e->next;
			}
		}
	}
				
}

void list::delete_element(int id)
{
	struct node *temp, *d;
	
	if(srt->pID == id)
	{
		temp = srt;
		srt = srt->next;
		srt->prev = NULL;
		cout << "RECORD ELEMENT DELETED" <<endl;
		free(temp);
		return;
	}
	
	d = srt;
	while(d->next->next != NULL)
	{
		if(d->next->pID == id)
		{
			temp = d->next;
			d->next = temp->next;
			cout << "RECORD ELEMENT DELETED" <<endl;
			free(temp);
			return;
		}
		d = d->next;
	}
	if (d->next->pID == id)
	{
		temp = d->next;
		free(temp);
		d->next = NULL;
		cout << "RECORD ELEMENT DELETED" <<endl;
		return;
	}
	cout << "ELEMENT " <<id <<" not found" <<endl;
	
}

void list::search_element(int id)
{
	struct node *s;
	s = srt;
	
	if(srt == NULL)
	{
		cout << "List Empty" <<endl;
		return;
	}
	else
	{
		
		while (s != NULL)
		{
			if(s->pID == id)
			{
				cout << "RECORD FOUND\n" <<endl;
  				cout <<"============================================= INVENTORY SYSTEM ========================================================="<<endl;
				cout << "\n ----------------------------------------------------------------------------------------------------------------------" << endl;
				cout << setw(21) <<"|Product ID|" << setw(33)<< "|Product Name|" << setw(30)<< "|Quantity|" << setw(28) << "|Price|";
				cout << "\n ----------------------------------------------------------------------------------------------------------------------" << endl;
  				cout<< setw(15) <<s->pID<<setw(35) <<s->productName <<setw(30)<<s->quantity << setw(29)<<s->price<<endl;
  				cout <<"\n\n\n\n" <<endl;	
  				break;
			}
			else
			{
				s = s->next;
			}
		}
	}
}


void list::cnt()
{
	struct node *c = srt;
	int cut = 0; //count
	
	while (c != NULL)
	{
		c = c->next;
		cut++;
	}
	cout << "\n\nThe number of products in Inventory System is:" <<cut <<endl;
}

void list::display()
{
	struct node *j;
	
	j = srt;

	
		cout <<"============================================= INVENTORY SYSTEM IN LINKED LIST =========================================="<<endl;
		cout << "\n ----------------------------------------------------------------------------------------------------------------------" << endl;
		cout << setw(21) <<"|Product ID|" << setw(33)<< "|Product Name|" << setw(30)<< "|Quantity|" << setw(28) << "|Price|";
		cout << "\n ----------------------------------------------------------------------------------------------------------------------" << endl;
	while(j != NULL)
	{
		cout<< setw(15) <<j->pID <<setw(34) <<j->productName <<setw(31)<<j->quantity << setw(29)<<j->price<<endl; //Output if input user add edit search delete
		j = j->next;
	}
	
}

int main()
{
	string productName;	
	int choice;
	int quantity;
	int pID;
	int element;
	float price;
	int exit;
	list ml;
	
	 
	do
	{	
		ml.display();
		ml.cnt();

		cout << "\nChoice 1 - 5" <<endl;
		cout << "1 - Add Product" << endl;
		cout << "2 - Edit Product info" << endl;
		cout << "3 - Search Product" << endl;
		cout << "4 - Delete Latest Product" << endl;
		cout << "5 - Exit" << endl;
		cout << "Selection: ";
		cin >> choice;	
		
	switch (choice)
	{
		case 1:
				system("cls");
				cout << "\t\t\tNote that Only Product ID, Quantity, Price, input the numbers only" <<endl; //
				cout << "\t\t\tNote that Only Product Name input the letters only" <<endl;
				cout << "\t\t\t                      Thank You" <<endl;
				cout << ""<<endl;	
				cout << "Enter Product ID: ";
					cin >> pID;
				cout << "Enter Product Name: ";
					cin >> productName;
				cout << "Enter Quantity: ";
					cin >> quantity;
				cout << "Enter Price: ";
					cin >> price;
				cout << "RECORD ADDED\n"<<endl;
				ml.add(pID,productName,quantity,price);	
				break;

		case 2:
			if (srt == NULL)
			{
				cout << "Inventory is empty it is underflow condition!" <<endl;	
			}
			else
			{
				cout << "Only Product ID input"<<endl;
				cout << "Edit Product info: ";
				cin >> element;
				
				ml.edit(element);
			}
			break;
			
		case 3:
			if (srt == NULL)
			{
				cout << "Inventory is empty it is underflow condition!" <<endl;
				break;
			}
			else
			{
				cout << "Only Product ID input" <<endl;
				cout << "Search Product: ";
				cin >> element;
				ml.search_element(element);
			}	
			break;
			
		case 4:
			if (srt == NULL) 
			{
				cout << "Inventory is empty it is underflow condition!" <<endl;
				break;
			}
			else
			{
				cout << "Only Product ID input"<<endl;
				cout << "Delete Product: ";
				cin>> element;	
				ml.delete_element(element);
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
