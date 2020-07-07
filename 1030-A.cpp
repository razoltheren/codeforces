#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{

		cin>>arr[i];
	}
	int k=0;
	for(int i=0;i<n;i++)
	{	
		if(arr[i] == 1)
		{
			k=1;
			break;
		}


		
	}

	if(k==1)
	{
		cout<<"HARD";
	}

	else
	{
		cout<<"EASY";
	}


	return 0;
}