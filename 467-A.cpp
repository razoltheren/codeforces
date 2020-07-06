#include<bits/stdc++.h>
using namespace std;

 int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int p[n],q[n];
	int k=0;
	for(int i=0;i<n;i++)
	{
		cin>>p[i]>>q[i];

	}
	for(int i=0;i<n;i++)
	{
		if(q[i]-p[i]>=2)
		{
			k+=1;
		}
		
	}
	cout<<k;
	return 0;
}