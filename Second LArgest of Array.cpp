#include<iostream>
#include<climits>
using namespace std;

void get(int ary[], int n) // to get input
{
	for(int i=0; i<n; i++)
	{
		cout<<"Enter element : "<<i+1<<" : ";
		cin>>ary[i];
	}
	
}
void print(int ary[], int n) // to print array
{
	for(int i=0; i<n; i++)
	{
		
		cout<<ary[i];
	}
	cout<<endl;
	
}

int second(int ary[], int n) //to find second largest
{
	int largest = ary[0];
	int secondlarge = INT_MIN;
	
	for(int i=0; i<n; i++)
	{
		if(ary[i] > largest)
		{
			secondlarge = largest;
			largest = ary[i];
		}
		else if(ary[i] > secondlarge && ary[i] != largest)
		{
			secondlarge = ary[i];
		}
	}
	return secondlarge;
}

int main() //driver code
{
	int ary[100];
	int n;
	cout<<"Enter size of array : ";
	cin>>n;
	cout<<endl;
	get(ary,n);
	cout<<second(ary,n);

}

