#include<iostream>
// create files, write information to files and read information from files
#include<fstream>
using namespace std;


//global variable declaration
string usernames;
int count;

int main()
{
    int choice,i,exit = 0; //declare int
    string password,name,fname,un,pw,line,pws; //declare string
    ofstream fileo;
    ifstream filei;
    cout << "Login Application\n";
    
    // this is for login 
    while(exit == 0) //because if you select any key expect 1 and 2 it will be end the program
    {
    	//select user 
        cout << "Select 1 to Register\n";
        cout << "Select 2 to Login\n";
        cout << "Press any key and enter to exit\n";
        //any key select
        cout << "You Select: ";
        cin  >>choice;
        if(choice == 2)
        {
        	//input the user if done registered 
            cout << "Enter your username: ";
            cin >> usernames; // your username account that you register
            cout<< "Enter your password: ";
            cin >> password; // your password that you register 
            
            //receive the user input result
            fname = usernames + ".txt";
            //file.open
            filei.open (fname.c_str());
            //cannot go login if you not registered 
            //also it will back to the login application
            if (!filei.is_open() && filei.fail())
            {
                cout<<"\nYou are not registered, please register before logging in.\n";
                //file.close
                filei.close();
                continue;
            }
   	         	// see the information that you login 
            	getline(filei,un); // for the username
            	getline(filei,line); // for the information
            	getline(filei,pw); // for the password
            
            //if you done login it will give your output profile information
            //un is the username 
            //pws and pw is the password
            if (usernames==un && pws==pw)
            {
                cout << "\nYou are successfully logged in\n";
                cout << "Profile Information\n";
                cout << "User-name:" <<un <<endl;
                cout << "Password: " <<password <<endl;
                getline(filei,password);
                
            }
            //if wrong input user password and username
            // this is the output
            else{
                cout << "\nWrong username or password!";
				cout << "\nPlease try Again.\n";
            }
            	cout <<endl;
        }
        
        //this is for the register 
        // this for successfully registered 
        else if(choice == 1)
        {
        	//create username
            cout << "\nCreate a username: ";
            cin  >> usernames;
            count = 0;
          
            if(count >= 3)
            {
                continue;
            }
            
            //create password
            cout <<"Create a password: ";
            cin  >> pws;
            fname = usernames + ".txt";
            //cout<<fname;
            //successfully registered 
            //file.open
            fileo.open (fname.c_str());
            fileo << usernames << endl << name << endl << pws << endl;
            cout  <<"\nYou are successfully registered\n";
            //file.close
            fileo.close();
        }
        // exit program
        else
        {
            exit = 1;
        }
    }
}
