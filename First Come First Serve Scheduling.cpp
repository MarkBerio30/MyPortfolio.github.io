
#include <iostream>
using namespace std;

//this function is to find the waiting time process
void waitingtime (int process[], int n, int bt[], int wt[])
{
	// waiting time for first process is 0
	wt[0] = 0;
	
	// calculate waiting time
	for (int i = 1; i < n; i++)
		wt[i] = bt[i - 1] + wt[i - 1];
}

//this function is to calculate the turn around time
void turnaroundtime(int process[], int n, int bt[], int wt[], int tat[])
{
	// calculate turnaround time by  bt[i] + wt[i}
	for (int i = 0; i < n ; i ++)
		tat[i] = bt[i] + wt[i];
}

//this function is to calculate the average time 
void averagetime(int process[], int n, int bt[])
{
	int wt[n], tat[n], total_wt = 0, total_tat = 0;
	//this function is to find waiting tume of all process
	waitingtime (process, n, bt, wt);
	
	//this function is to find around tume of all process
	turnaroundtime(process, n , bt, wt, tat);
	
	//Display process along with all details
	cout << "Processes " << " Burst Time " <<" Waiting Time " << " Turn around time\n";
	
	//Now is time to calculate the total of waiting time and around time
	for (int i = 0; i < n; i++)
	{
		total_wt = total_wt + wt[i];
		total_tat = total_tat + tat[i];
		
		cout << " " << i + 1 << "\t\t" << bt[i] <<"\t " << wt[i] << "\t\t " << tat[i] <<endl;	
	}	
	
	cout << "Average Waiting time is = " << (float)total_wt / (float)n;
	cout << "\nAverage Turn Around Time  is = " << (float)total_tat / (float)n;
}

int main ()
{
	//process id
	int process [] = {1,2,3};
	int n = sizeof process / sizeof process[0];
	
	//bt of all process
	int bursttime[] = {10,5,8	};
	
	//Time Quantum
	int quantum = 2;
	averagetime(process, n , bursttime);
	return 0;
}
