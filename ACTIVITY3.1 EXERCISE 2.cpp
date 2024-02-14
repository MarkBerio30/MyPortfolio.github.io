// Evaluate which number is the largest
// Display the largest number
#include <iostream>
using namespace std;

int main()
{
    int i, n;
    float Boss[5];

    cout<<"Enter 5 Random Numbers" <<endl;
    //  Number entered by the user
    for(i = 0; i < 5; ++i)
    {
       cout << "Enter Number " << i + 1 << " : ";
       cin >> Boss[i]; 
    }
	
    // Loop largest [0]5
    for(i = 1;i < 5; ++i)
    {
       if(Boss[0] < Boss[i])// Evaluate which is Number is the largest
           Boss[0] = Boss[i];
    }
    cout << "The Largest Number = " << Boss[0]; //Display The largest number


    return 0;
}

