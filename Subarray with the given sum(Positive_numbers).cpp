// Subarray with the given sum
#include<iostream>
using namespace std;
void subarray_sum(int arr[], int size, int sum)
{
	for(int i=0; i<size; i++)
	{
		int current_sum = arr[i];
		if(current_sum==sum)
		{
			cout<<"Subarray found at "<<i<<endl;
			return;
		}
		else{
			for(int j=i+1; j<size; j++)
			{
				current_sum += arr[j];
				if(current_sum==sum)
				{
					cout<<"The subarray lies between indexes "<<i<<" "<<"and "<<j<<endl;
					return;
				}
			}
		}	
	}
	cout<<"Subarray not found"<<endl;
	return;
}

int main()
{
	int size;
	cin>>size;
	int arr[size];
	for(int i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	int sum = 23;
	subarray_sum(arr, size, sum);
	return 0;
}
