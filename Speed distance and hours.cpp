566#include <iostream>
using namespace std;
int main()
{
	int speed;
    int traveled_in_hours;
    int distance = 0;
    cout << "What is the speed of the vehicle in mph? ";
    
    while ((cin >> speed) , (speed < 0) )
	{
     
	}
	cout << "How many hours has it traveled? ";	
	while ((cin >> traveled_in_hours) , (traveled_in_hours < 1))
	{
		
	}
    cout << "Hour Distance Traveled" << endl;
    cout << "--------------------------- " << endl ;
    for(int i = 1; i <= traveled_in_hours; i++)
    {
    distance = speed * i;
    cout << " " << i;
	cout  << " " << distance << endl;
    }
    return 0;
}
