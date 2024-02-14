#include <iostream>
using namespace std;

// this is function that find the waiting time process
void waitingtime(int process[], int n, int bt[], int wt[], int quantum)
{
	//make a copy of burst times bt[] (burst time) to store remaining
	int remaining_bt[n];
		for (int i = 0; i < n; i++)
			remaining_bt[i] = bt[i];
			
		int t = 0; // this is the current time
		
	// so we need keep traversing process in round robin manner
	// which until all of them are not done.
	while (1)
	{
		bool done = true;
		
		//traverse all prpocess one by one repeatedly
		for (int i = 0; i < n; i ++)
		{
			//if bt of a process is greater than 0
			// then only nedd is to process further
			if (remaining_bt[i] > 0)
			{
				done = false; // pending process
			
			if (remaining_bt[i] > quantum)
			{
				//increase the value t
				// and how much time process has been processed
				t += quantum; // t is the time
				
				//Decrease the bt of current process by the quantum
				remaining_bt[i] -= quantum;
			}
			
			else
			{
				//increase the value t and how much time process has been processed
				t = t +  remaining_bt[i];
				
				//wait the time is current time minus time used by this process
				wt[i]= t - bt[i];
				
				// As the process get fully executed and make its remaning bt = 0
				remaining_bt[i] = 0;
			 	}
			}
		}
				// if all process is done
			if (done == true)
				break;
	}
}

//this function is to calculate to turn around time
void turnaroundtime (int process[], int n, int bt[], int wt[], int tat [])
{
	//Calculating turnaround time by bt[i] + wt[i]
	for (int i = 0; i < n; i++)
		tat [i] = bt[i] + wt[i];
}

//this function is to calculate the average time 
void averagetime (int process[], int n, int bt[], int quantum)
{
	int wt[n], tat[n], total_wt = 0, total_tat = 0;
	//this function is to find waiting tume of all process
	waitingtime (process, n, bt, wt, quantum);
	
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
	int bursttime[] = {12,7,9};
	
	//Time Quantum
	int quantum = 2;
	averagetime(process, n , bursttime, quantum);
	return 0;
}
