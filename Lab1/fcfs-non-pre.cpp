//SOHAM SAMANTA CODES
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define PI 3.1415926535897932384626433832
#define ss ios_base::sync_with_stdio(false);cin.tie(NULL);


// Function to Calculate waiting time
// and average waiting time
void CalculateWaitingTime(int at[],int bt[], int N){

	// Declare the array for waiting
	// time
	int wt[N];

	// Waiting time for first process
	// is 0
	wt[0] = 0;

	// Print waiting time process 1
	cout << "P\t\tAT\t\t"<< "BT\t\tWT\n\n";
	cout << "1"<< "\t\t" << at[0] << "\t\t"<< bt[0] << "\t\t" << wt[0] << endl;

	// Calculating waiting time for
	// each process from the given
	// formula
	for (int i = 1; i < 5; i++) {
		wt[i] = (at[i - 1] + bt[i - 1]+ wt[i - 1]) - at[i];
		cout << i + 1 << "\t\t" << at[i]<< "\t\t" << bt[i] << "\t\t"<< wt[i] << endl;
	}

	// Declare variable to calculate
	// average
	float average;
	float sum = 0;

	// Loop to calculate sum of all
	// waiting time
	for (int i = 0; i < 5; i++) {
		sum = sum + wt[i];
	}

	// Find average waiting time
	// by dividing it by no. of process
	average = sum / 5;

	// Print Average Waiting Time
	cout << "\nAverage waiting time = "<< average;
}

// Driver code
int main()
{
	// Number of process
	int N = 5;

	// Array for Arrival time
	int at[] = { 2,5,1,0,4 };

	// Array for Burst Time
	int bt[] = { 6,2,8,3,4 };

	// Function call to find
	// waiting time
	CalculateWaitingTime(at, bt, N);
    cout<<endl;
	return 0;
}
