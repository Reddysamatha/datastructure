//insertion sorting using for loop
#include<iostream>
using namespace std;
int main()
{
	int n,i,j,arr[100],temp;
	cout<<"enter n value";
	cin>>n;
	cout<<"enter"<<n<<"values";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		for(j=i-1;j>=0;j--)
		{
			cout<<arr[j]<<"-"<<arr[j+1]<<"\n";
			if(arr[j]>temp)
			{
				arr[j+1]=arr[j];
			}
			else
			{
				break;
			}
		}
		arr[j+1]=temp;
	}

	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
	return 0;
}
