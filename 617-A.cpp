# include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(int argc, char const *argv[])
{	ll x;
	cin>>x;
	int k=1;
	while(x>5)
	{
		x=x-5;
		k=k+1;
	}
	cout<<k;
	return 0;
}