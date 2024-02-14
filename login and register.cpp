#include<iostream>
#include<istream>
#include<fstream>
#include <string>
using namespace std;
void login();
void registr();


int main()
{
        int choice;
       
        cout<<"1.LOGIN"<<endl;
        cout<<"2.REGISTER"<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"\nEnter your choice :";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
                case 1:
                        login();
                        break;
                case 2:
                        registr();
                        break;
                default:
                        system("cls");
                        cout<<"You've made a mistake , Try again..\n"<<endl;
                        main();
                        
        }


}

void login()
{
        int count;
        string user,pass,u,p;
        system("cls");
        cout<<"please enter the following details"<<endl;
        cout<<"USERNAME: ";
        cin>>user;
        cout<<"PASSWORD: ";
        cin>>pass;

        ifstream input("base.txt");
        while(input>>u>>p)
        {
                if(u == user && p == pass)

                {
                        count = 1;
                        system("cls");
                }
        }
        input.close();
        if(count == 1)
        {
                cout<<"\nHello"<<user<<"\n<LOGIN SUCCESSFUL>\nThanks for logging in..\n";
                cin.get();
                cin.get();
                main();
           
        }
        else
        {
                cout<<"\nLOGIN ERROR\nPlease check your username and password\n";
                main();
             
        }
}

void registr()
{

        string reguser,regpass,ru,rp;
        system("cls");
        cout<<"Enter the username :";
        cin>>reguser;
        cout<<"\nEnter the password :";
        cin>>regpass;

       
        system("cls");
        cout<<"\nRegistration Sucessful\n";
        main();
}







