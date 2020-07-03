# include<bits/stdc++.h>

using namespace std;
int main(int argc, char const *argv[])
{	int n,a,b,sum=0;
	cin>>n;
	int ans= 0;
	for(int i=0;i<n;i++)
	{	
		cin>>a;
		sum = sum -a;
		cin>>b;
		sum= sum +b;
		// cout<<sum<<" ";
		ans = max(sum,ans);

	}
	cout<<ans;
	return 0;
}